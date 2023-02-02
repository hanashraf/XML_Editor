#include "compressiondecoding.h"
#include <iostream>
using namespace std;
string compressiondecoding::decimalToBinary(int number)
{
    int i = 0;
    string binaryNumber = "", zeroes;
    while (number > 0)
    {
        binaryNumber = (number % 2 == 0 ? "0" : "1") + binaryNumber;

        number /= 2;
        i++;
    }
    zeroes.append(8 - binaryNumber.size(), '0');
    binaryNumber.insert(0, zeroes);
    return binaryNumber;
}
void compressiondecoding::buildTree(string &path, char ascii_code)
{
    HuffNode *current = root_node;
    for (int i = 0; i < (int)path.size(); i++)
    {
        if (path[i] == '0')
        {
            if (current->getLeft() == NULL) // create a new node if it is the first left node
            {
                current->setLeft(new HuffNode());
            }
            current = current->getLeft(); // pointer will point to the next left node
        }
        else if (path[i] == '1')
        {
            if (current->getRight() == NULL) // create a new node if it is the first right node
            {
                current->setRight(new HuffNode());
            }
            current = current->getRight(); // pointer will point to the next right node
        }
        else
        {
        }
    }
    current->setId(ascii_code); // set the original id of the character
}
