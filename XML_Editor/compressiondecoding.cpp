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

