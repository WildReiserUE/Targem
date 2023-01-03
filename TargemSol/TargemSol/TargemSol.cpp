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
    cout<<"TESTING BLOCK:"<<endl;
    DynString A = "aaaaaa";
    cout <<"SIZE A="<< A.size <<" VALUE="<< A << endl;
    DynString B = "bbbbb";
    cout <<"SIZE B="<< B.size <<" VALUE="<< B << endl;
    DynString C = A + B;
    cout <<"SIZE C=A+B="<< C.size <<" VALUE="<< C << endl;
    //A = B;
    int count = 0;
    vector<DynString> V;
    char buff[MAX_BUFF_SIZE];
    cout << "How many strings you need input?" << endl;
    cin >> count;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < count; i++)
    {
        cin.getline(buff, MAX_BUFF_SIZE);
        V.push_back(buff);
    }
    cout << "ARRAY STRINGS" << endl;
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << endl;
    }
    sort(V.begin(), V.end(), SortDynString);
    cout << "AFTER SORT STRINGS" << endl;
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << endl;
    }
    system("pause");
    return 0;
}
