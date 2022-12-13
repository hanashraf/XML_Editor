#include "consistency.h"


consistency::consistency()
{

}

bool areMatchingTags(string tag1, string tag2) {
    return (tag1 == tag2.substr(1));
}
