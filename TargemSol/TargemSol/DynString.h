#pragma once
#include <iostream>
using namespace std;

class DynString
{
private:
   
    char* arr;
    int GetLenghtInput(const char* instr);
    friend ostream& operator<<(ostream& os, const DynString& instr);
    friend bool operator>(const DynString& m1, const DynString& m2);
    friend bool operator<(const DynString& m1, const DynString& m2);

public:
    int size = 0;
    DynString& operator=(const char*& instr);
    DynString& operator+(const DynString& instr);
    DynString(const char* instr);
    DynString();
    ~DynString();
};
