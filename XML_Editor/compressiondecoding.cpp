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
compressiondecoding::compressiondecoding(string input_file_name, string output_file_name)
{
    this->input_file_name = input_file_name;
    this->output_file_name = output_file_name;
    createNodeArray();
    createHuffmanTree();

    in_file.open(input_file_name, ios::in | ios::binary);           // opening the input file
    out_file.open(output_file_name, ios::out);                      // opening the output file
    unsigned char huffTreeSize;
    char counter;
    in_file.read(reinterpret_cast<char *>(&huffTreeSize), 1);       // reading the size of the tree
    in_file.seekg(-1, ios::end);                                    // jumping to the last one byte to get the number of zeroes appended to the string at the end

    in_file.read(&counter, 1);                                      // reading the number of zeroes appended to the string at the end
    in_file.seekg(1 + 17 * huffTreeSize, ios::beg);                 // jumping to the position where the text starts

    vector<unsigned char> text_vec;
    unsigned char textsec;
    in_file.read(reinterpret_cast<char *>(&textsec), 1);            // reading the first character code

    while (!in_file.eof())                                          // checking whether it is the end of the file ot not
    {                                                               // geting the text byte by byte
        text_vec.push_back(textsec);                                // pushing the character read from input file in the new text vector
        in_file.read(reinterpret_cast<char *>(&textsec), 1);        // reading the next character code
    }                                                               // loop till we reach the end of the file

    HuffNode *current_ptr = root_node;                              // initializing the pointer to point to the root node
    string path;
    for (int i = 0; i <(int) text_vec.size() - 1; i++)
    {                                                               // translating the huffman code
        path = decimalToBinary(text_vec[i]);                        // converting characters codes in text vector from decimal to binary and save it in a string path

        if (i ==(int) text_vec.size() - 2)
            path = path.substr(0, 8 - counter);

        for (int j = 0; j <(int) path.size(); j++)
        {
            if (path[j] == '0')
            {
                current_ptr = current_ptr->getLeft();               // letting the pointer to point to the left node
            }
            else
                current_ptr = current_ptr->getRight();              // letting the pointer to point to the left node

            if (current_ptr->getLeft() == NULL && current_ptr->getRight() == NULL)
            {
                out_file.put(current_ptr->getId());                 // writing its id "character" in the output file
                current_ptr = root_node;                            // pointing again to the root node
            }
        }
    }
    in_file.close();                                                // closing input file
    out_file.close();                                               // closing output file
}
