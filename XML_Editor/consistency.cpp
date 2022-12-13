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


