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
void compressiondecoding::createHuffmanTree()
{
    in_file.open(input_file_name, ios::in | ios::binary);       // opening the input file
    unsigned char nodesNumber;
    in_file.read(reinterpret_cast<char *>(&nodesNumber), 1);    // reading the number of nodes in the huffman tree
    root_node = new HuffNode;

    for (int i = 0; i < nodesNumber; i++)
    {
        char id_code;                                           // holding the original character
        unsigned char b_code[16];                               // obtaining the binary code
        in_file.read(&id_code, 1);                              // reading character
        in_file.read(reinterpret_cast<char *>(b_code), 16);     // reading the code of the character
        string s_code = "";
        for (int i = 0; i < 16; i++)
        {                                                       // obtaining 128-bit binary string
            s_code += decimalToBinary(b_code[i]);
        }
        int k = 0;
        while (s_code[k] == '0')
        {                                                       // deleting the added zeroes to get the real huffman code
            k++;
        }
        s_code = s_code.substr(k + 1);                         // getting the real huffman code
        buildTree(s_code, id_code);                            // calling build tree function
    }
    in_file.close();                                          // closing the input file
}
