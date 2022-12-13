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
