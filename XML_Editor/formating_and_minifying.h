//
// Created by ahmeddareff on 12/14/22.
//

#ifndef FORMATING_AND_MINIFYING_H
#define FORMATING_AND_MINIFYING_H

#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stack>
#include <general_functions.h>
using namespace std;
string minifying_func(vector<string>& xml);
string getTabs(int n);
vector<string> prettifying_func(vector<string>& xml);

class Formating_and_Minifying
{
public:
    Formating_and_Minifying();
};

#endif // FORMATING_AND_MINIFYING_H
