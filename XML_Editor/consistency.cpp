#include "consistency.h"


consistency::consistency()
{

}

bool isOpeningTag(string tag)
{
    return (tag[0] != '/');

}

bool areMatchingTags(string tag1, string tag2) {
    return (tag1 == tag2.substr(1));
}



bool isXMLTagMatched(stack<string> stack_tag, string tag) {

    if (stack_tag.empty()) {
        return false;
    }
    if (!areMatchingTags(stack_tag.top(), tag)) {
        return false;
    }

    return true;

}

void detect_errors(vector<string>& XML_Vector)
{
    stack<string> s;
    stack<int> lines;
    string tag;
    string str;
    int n = 0;


    for (int i = 0; i < XML_Vector.size(); i++)
    {

        if ((XML_Vector[i] == "") || (((XML_Vector[i][1] == '?') || (XML_Vector[i][1] == '!')) && XML_Vector[i][0] == '<')
            || ((XML_Vector[i].find("<") == -1) && (XML_Vector[i].find(">") != -1))
            || ((XML_Vector[i].find(">") == -1) && (XML_Vector[i].find("<") != -1)))
        {
            continue;

        }

        while (n < XML_Vector[i].length())
        {

            if (n >= XML_Vector[i].length()) {
                break;
            }
            while (XML_Vector[i][n] != '<')
            {
                if (n >= XML_Vector[i].length()) {
                    break;
                }
                n++;

            }

            n++;

            if (n >= XML_Vector[i].length()) {
                break;
            }
            while (XML_Vector[i][n] != ' ' && XML_Vector[i][n] != '>') {
                tag += XML_Vector[i][n];
                if (n >= XML_Vector[i].length()) {
                    break;
                }
                n++;
            }
            n++;
            str = tag;
            tag = "";
            if (isOpeningTag(str)) {
                s.push(str);
                lines.push(i);
            }

            else {

                if (isXMLTagMatched(s, str))
                {
                    s.pop();
                    lines.pop();
                }
                else
                {
                    XML_Vector[i].append("               <---- Error");


                }

            }


        }

        n = 0;

    }
    int len = 0;
    int size = s.size() - 1;
    while (len < size)
    {

        if (XML_Vector[lines.top()].find('/') != -1)
        {
            int index = XML_Vector[lines.top()].find('/') - 1;

        }
        else
        {
            XML_Vector[lines.top()].append("               <---- Error");
        }

        s.pop();
        lines.pop();
        len++;
    }
    if (s.size() == 1) {
        XML_Vector.push_back("               <---- Error");
        s.pop();
        lines.pop();
    }


}























































































































































































































bool check_consistency(vector<string>& XML_Vector) {
    stack<string> s;
    string tag;
    string str;
    int n = 0;

    for (int i = 0; i < XML_Vector.size(); i++)
    {
        //if the line does not contain any tags or starts with "" or ? or ! , skip it
        if ((XML_Vector[i] == "") || (((XML_Vector[i][1] == '?') || (XML_Vector[i][1] == '!')) && XML_Vector[i][0] == '<')
            || ((XML_Vector[i].find("<") == -1) && (XML_Vector[i].find(">") != -1))
            || ((XML_Vector[i].find(">") == -1) && (XML_Vector[i].find("<") != -1)))
        {
            continue;

        }
        // as long as n is less than XML_Vector[i].length()
        while (n < XML_Vector[i].length())
        {

            if (n >= XML_Vector[i].length()) {
                break;//when n is greater than or equal XML_Vector[i].length(), get out of the loop
            }
            while (XML_Vector[i][n] != '<') //iterrate as long as XML_Vector[i][n] is not an openning tag
            {
                if (n >= XML_Vector[i].length()) {
                    break;//when n is greater than or equal XML_Vector[i].length(), get out of the loop
                }
                n++;//every time we iterrate and XML_Vector[i][n] is not an openning tag,increase n by 1 till n is greater than or equal XML_Vector[i].length()

            }
            n++;
            if (n >= XML_Vector[i].length()) {
                break;//when n is greater than or equal XML_Vector[i].length(), get out of the loop
            }
            while (XML_Vector[i][n] != ' ' && XML_Vector[i][n] != '>') {
                tag += XML_Vector[i][n];//As long as, XML_Vector[i][n] not equal space or >, this means we have not reached the end of the tag,so string tag will be equal to what is inside XML_Vector[i][n]
                if (n >= XML_Vector[i].length()) {
                    break;//when n is greater than or equal XML_Vector[i].length(), get out of the loop
                }
                n++;//every time we iterrate and XML_Vector[i][n] not equal space or >,increase n by 1 till n is greater than or equal XML_Vector[i].length()
            }

            n++;//increase n by 1
            str = tag;//let sting str defined above equal to tag
            tag = "";//tag will be equal to null
            if (isOpeningTag(str)) //check whether the str is an openning tag or not
            {
                s.push(str);//if yes,push the openning tag into the stack
            }

            else //if it is not an openning tag, we will check it against the closing tag
            {
                if (isXMLTagMatched(s, str))//if the openning tag matches the closing tag, pop the openning tag
                {
                    s.pop();
                }
                else
                {
                    return false;//if the openning tag does not match the closing tag, return false beacause the XML file is inconsistent
                }

            }


        }

        n = 0;//after getting out of the first while loop,we will make n=0 again as in the start of the function

    }
    if (!s.empty()) { //if the stack is not empty, then the XML file is inconsistent
        return false;
    }

    return true;

}


