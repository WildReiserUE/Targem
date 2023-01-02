#include <algorithm>
#include "DynString.h"
#include <vector>
#include  <iostream>
#define MAX_BUFF_SIZE 1000
using namespace std;

bool SortDynString(DynString First, DynString Second)
{
    return Second > First;
}

int main()
{
    DynString A = ("aaazzz");
    cout << A.size << "FFFFFFFFFFFFFF" << endl;
    DynString B = "bbbbb";
    cout << A.size << "DDDDDDDDDDDDDD" << endl;
    DynString C = A + B;
    cout << A.size << "CCCCCCCCCCCCCC" << endl;
    //A = B;
    cout << A << endl;
   
    cout << B << endl;
    cout << C << endl;
    int count = 0;
    vector<DynString> V;
    char buff[MAX_BUFF_SIZE];
    cout << "How many match words need input?" << endl;
    cin >> count;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < count; i++)
    {
        cin.getline(buff, MAX_BUFF_SIZE);
        V.push_back(buff);
    }
    cout << "ARRAY WORDS" << endl;
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << endl;
    }
    sort(V.begin(), V.end(), SortDynString);
    cout << "AFTER ARRAY SORT" << endl;
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << endl;
    }
    return 0;
}
