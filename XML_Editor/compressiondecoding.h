#ifndef COMPRESSIONDECODING_H
#define COMPRESSIONDECODING_H
#include "hufftree.h"
#include <fstream>
#include <string>
#include <queue>

class compressiondecoding : HuffTree
{
private:
    fstream in_file;
    fstream out_file;
    string input_file_name;
    string output_file_name;
    HuffNode *root_node;
    void buildTree(string &path, char ascii_code);
    string decimalToBinary(int number);
    void createHuffmanTree();
public:
    compressiondecoding(string input_file_name, string output_file_name);
};

#endif // COMPRESSIONDECODING_H
