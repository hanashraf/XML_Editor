//
// Created by ahmeddareff on 12/14/22.
//

#ifndef FORMATTING_MINIFYING_H
#define FORMATTING_MINIFYING_H
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <stack>
#include <general_functions.h>
using namespace std;
string minifying_func(vector<string>& xml,string file_name);
string getTabs(int n);
vector<string> prettifying_func(vector<string>& xml,string file_name);

#endif // FORMATTING_MINIFYING_H
