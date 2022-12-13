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
