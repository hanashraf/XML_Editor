#include "compressionCoding.h"
#include <string>
#include <iostream>
using namespace std;

CompressionCoding::CompressionCoding(string input_file_name, string output_file_name)
{
    this->input_file_name = input_file_name;
    this->output_file_name = output_file_name;
    createNodeArray();
    createPriorityQueue();
    createHuffmanTree();
    in_file.open(input_file_name, ios::in);
    out_file.open(output_file_name, ios::out | ios::binary);
    string output_string = "";
    output_string += (char)P_Q.size();
    setFixedStringForm(output_string);
    appendCodeOfEachChar(output_string);
    out_file.write(output_string.c_str(), output_string.size());
    in_file.close();
    out_file.close();

}
int CompressionCoding::binaryToDecimal(string number)
{
    int result = 0;
    for (int i = 0; i < number.size(); i++)
    {
        result = result * 2 + number[i] - '0';
    }
    return result;
}
