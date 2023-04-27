//Q1 code to print 2 to the power n combinations
//for given n value

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Please give a value to print 2^n propositional variables:";
    cin>>n;
    // number of combinations for given n value
    int NumOfCom;
    NumOfCom = pow(2, n);

    for (int i = 0; i < NumOfCom; i++)
    {
        cout<<i<<"\t";
        for (int j = n - 1; j >= 0; j--)
        {
            cout << ((i >> j) & 1)<<" ";
        }
        cout << endl;
    }
}