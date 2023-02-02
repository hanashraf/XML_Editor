#include "json.h"
//this function check if a node is an attribute(value) or not
bool node::not_attribute(){
    if(attr.empty()== 1)
        return 1;
    return 0;
}
