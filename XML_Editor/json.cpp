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
