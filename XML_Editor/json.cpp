#include "json.h"
//this function check if a node is an attribute(value) or not
bool node::not_attribute(){
    if(attr.empty()== 1)
        return 1;
    return 0;
}

int node::get_parent_index()
{
    int num=0;
    node *temp=new node;
    temp=previous;
    while(temp!=nullptr)
    {
        num++;
        temp=temp->previous;
    }
    return num;
}

string pasre_tag(string s)
{
    //start from index 1 to igonre <
    int i =1;
    string tag;//string to save the tag into

    if(s[1] == '/')
    {
        i=2;
    }
    //while we didn't reach a space or a closing > or the end of the line
    while((s[i] !='>') && (s[i] !=' ') && (i != (int)s.length()-1))
    {
        //parse the tag
        if(s[i] == '/')
        {
            break;
        }
        tag += s[i];
        i++;
    }
    return tag;
}

int get_string_index(string s) //this function searching for attribute if found return its starting index else return 0
{
    for(int i=1; i<(int)s.length(); i++)
    {
        if(s[i] == ' ')
            return i+1;
    }
    return 0;
}
