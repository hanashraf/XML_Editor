#include "consistency.h"


consistency::consistency()
{

}

<<<<<<< HEAD
bool isOpeningTag(string tag)
{
    return (tag[0] != '/');
=======
bool areMatchingTags(string tag1, string tag2) {
    return (tag1 == tag2.substr(1));
>>>>>>> refs/remotes/origin/main
}
