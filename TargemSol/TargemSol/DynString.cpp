#include "DynString.h"

DynString::DynString(const char* instr)
{
    arr = nullptr;
    size = GetLenghtInput(instr);
    arr = new char[size + 1];
    for (int i = 0; i < size; i++)
    {
        arr[i] = instr[i];
    }
    arr[size] = '\0';
    cout<<size<<endl;
}

DynString::DynString()
{
    arr = nullptr;
    size = 0;
    cout<<size<<endl;
    *this = "";
}

DynString::~DynString()
{
   // cout<<arr<<endl;
   // if(arr != nullptr)
   //      delete []arr;
}
//
// DynString::DynString(DynString&& instr) noexcept
// {
//     size = instr.size;
//     arr = instr.arr;
//     instr.size = 0;
//     instr.arr = nullptr;
// }

DynString& DynString::operator+(const DynString& instr)
{
    int n = size + instr.size;
    char* newArr = new char[n];

    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < instr.size; i++)
    {
        newArr[(size + i)] = instr.arr[i];
    }
    newArr[n] = '\0';
    arr = newArr;
    size = n;
    return *this;
}

DynString& DynString::operator=(const char* & instr)
{
    delete []arr;
    size = GetLenghtInput(instr);
    arr = new char[size + 1];
    for (int i = 0; i < size; i++)
    {
        arr[i] = instr[i];
    }
    arr[size] = '\0';
    return *this;
}
//
// DynString& DynString::operator=(DynString&& instr) noexcept
// {
//     if (this != &instr)
//     {
//         delete[] arr;
//
//         arr = instr.arr;
//         size = instr.size;
//
//         instr.arr = nullptr;
//         instr.size = 0;
//     }
//     return *this;
// }

int DynString::GetLenghtInput(const char* instr)
{
    int m = 0;
    const char* s = instr;
    while (*s != '\0')
    {
        s++;
        m++;
    }
    return m;
}

ostream& operator<<(ostream& os, const DynString& instr)
{
    if (instr.arr == nullptr)
    {
        os << "No data in your string\n";
        return os;
    }
    os << instr.arr;
    return os;
}

bool operator>(const DynString& m1, const DynString& m2)
{
    int count = m1.size;
    if (m1.size < m2.size) count = m1.size;

    for (int i = 0; i < count; i++)
    {
        const int chl = tolower(m1.arr[i]);
        const int chr = tolower(m2.arr[i]);

        if (chl != chr)
        {
            return chl < chr;
        }
    }
    return false;
}

bool operator<(const DynString& m1, const DynString& m2)
{
    return m2 > m1;
}
