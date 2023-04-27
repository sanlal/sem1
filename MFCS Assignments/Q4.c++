//Q4 Evaluate postfix expression and return the result
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to evaluate postfix expression and return the result
double evaluatePostfix(string exp)
{
    // Create a stack
    stack<double> stack;

    // Scan all characters one by one
    for (int i = 0; i < exp.length(); i++)
    {
        // If the scanned character is an operand (number here),
        // push it to the stack
        if (isdigit(exp[i]))
            stack.push(exp[i] - '0');

        // If the scanned character is an operator, pop two
        // elements from stack and apply the operator
        else
        {
            double val1 = stack.top();
            stack.pop();

            double val2 = stack.top();
            stack.pop();

            switch (exp[i])
            {
            case '+':
                stack.push(val2 + val1);
                break;

            case '-':
                stack.push(val2 - val1);
                break;

            case '/':
                stack.push(val2 / val1);
                break;

            case '*':
                stack.push(val2 * val1);
                break;
            }
        }
    }

    // Return the result from the stack
    return stack.top();
}

int main()
{
    string exp ;
    
    cout<<"enter a postfix expression:";
    cin>>exp;

    cout << "Result: " << evaluatePostfix(exp) << endl;

    return 0;
}