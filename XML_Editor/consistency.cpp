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
            }

            else {
                if (isXMLTagMatched(s, str))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }

            }


        }

        n = 0;

    }
    if (!s.empty()) {
        return false;
    }

    return true;

}
void fix_errors(vector<string>& XML_Vector) {
    stack<string> stack_tag;
    stack<int> count;
    string tag;
    string str;
    int n = 0;
    for (int i = 0; i < XML_Vector.size(); i++)
    {
        if ((XML_Vector[i] == "") || (((XML_Vector[i][1] == '?') || (XML_Vector[i][1] == '!')) && XML_Vector[i][0] == '<')
            || ((XML_Vector[i].find("<") == -1) && (XML_Vector[i].find(">") != -1))
            || ((XML_Vector[i].find(">") == -1) && (XML_Vector[i].find("<") != -1)))
        {
            continue;// if the 1st line is empty or contains "?" or "!" or has a opening tag without a closing tag or vice versa skip line

        }
        while (n < XML_Vector[i].length())
        {

            if (n >= XML_Vector[i].length()) break; //if n is larger than number of elements in this row go to next row

            while (XML_Vector[i][n] != '<')
            {
                if (n >= XML_Vector[i].length()) {
                    break;
                }
                n++;
            }
            int startindex = n + 1; //start index is after opening tag
            n++;

            if (n >= XML_Vector[i].length()) break;

            while (XML_Vector[i][n] != ' ' && XML_Vector[i][n] != '>')
            {
                tag += XML_Vector[i][n];
                n++;
                if (n >= XML_Vector[i].length()) break;
            }
            int endindex = n + 1;// end index is after closing tag
            n++;
            str = tag; // update string str with the string detected between an opening and closing tag
            tag = ""; // clear string tag
            if (isOpeningTag(str)) // find out if the string found is an opening tag or a closing tag
            {
                stack_tag.push(str); // if it's an opening tag push the string into stack_tag
                count.push(i); // push into stack(count) the number of line you're at
            }
            else
            {

                if (isXMLTagMatched(stack_tag, str)) // else if it's a closing tag check if the top of the stack is equivalent to the current string
                {
                    stack_tag.pop(); // pop string from stack
                    count.pop(); // pop number of line
                }
                else
                {
                    XML_Vector[i].insert(0, "<" + str.substr(1) + ">"); // else insert string with an opening tag

                }

            }


        }

        n = 0;

    }
    int len = 0;
    int size = stack_tag.size() - 1;
    while (len < size)
    {

        if (XML_Vector[count.top()].find('/') != -1) // if the number of line (pushed to stack(count)) contains "/" in xml file
        {
            int index = XML_Vector[count.top()].find('/') - 1; // index = line -1
            XML_Vector[count.top()].insert(index, "</" + stack_tag.top() + ">"); // insert closing tag at index
        }
        else // if the number of line in xml file doesn't contain "/"
        {
            XML_Vector[count.top()].append("</" + stack_tag.top() + ">"); //add closing tag
        }
        stack_tag.pop();
        count.pop();
        len++;
    }
    if (!stack_tag.empty()) // if stack is not empty
    {
        XML_Vector.push_back("</" + stack_tag.top() + ">"); // add closing tag to stack
        stack_tag.pop();
        count.pop();
    }
}

