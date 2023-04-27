/*
Q2 implement the evaluation of the given formula
using the values of the propositional variables
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// function to evaluate the given well-formed formula
bool eva_formula(string formula, int n, int values[])
{

}

int main()
{
    string formula;
    cout<<"Give your WFF :";//WFF=well formed formula
    cin >> formula;

    int n;
    cout<<"Please give a number :";//for number of propositional variables
    cin >> n;

    int Number_Of_Combinations = pow(2, n);

    for (int i = 0; i < Number_Of_Combinations; i++)
    {
        int values[n]; // values of the propositional variables

        for (int j = 0; j < n; j++)
        {
            // get the j-th bit of i
            values[j] = (i >> j) & 1;
        }

        //We have to "Evaluate the given formula using the values of the propositional variables"
        if (eva_formula(formula, n, values))
        {
            // print the values of the propositional variables that make the formula true
            for (int j = 0; j < n; j++)
                cout << values[j] << " ";

            cout << endl;
        }
    }

    return 0;
}