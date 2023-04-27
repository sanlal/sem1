#include <iostream>
#include <stack>
#include <string>
using namespace std;

string postfixToPrefix(string exp)
{
  stack<string> stack;

  for (int i = 0; i < exp.length(); i++)
  {
    // If the scanned character is an operand,
    // push it to the stack.
    if (isdigit(exp[i]))
      stack.push(string(1, exp[i]));

    // If the scanned character is an operator,
    // pop two elements from the stack, perform
    // the operation and push the result back to
    // the stack.
    else
    {
      string val1 = stack.top();
      stack.pop();
      string val2 = stack.top();
      stack.pop();

      // The expression is in postfix notation,
      // so the operator appears after the
      // operands. We need to reverse the order
      // to obtain the prefix notation.
      string temp = val1 + val2 + exp[i];

      // Push the result back to the stack.
      stack.push(temp);
    }
  }

  // The final value in the stack is the result
  // of the expression in prefix notation.
  return stack.top();
}

string prefixToPostfix(string exp)
{
  stack<string> stack;

  for (int i = exp.length() - 1; i >= 0; i--)
  {
    // If the scanned character is an operand,
    // push it to the stack.
    if (isdigit(exp[i]))
      stack.push(string(1, exp[i]));

    // If the scanned character is an operator,
    // pop two elements from the stack, perform
    // the operation and push the result back to
    // the stack.
    else
    {
      string val1 = stack.top();
      stack.pop();
      string val2 = stack.top();
      stack.pop();

      // The expression is in prefix notation,
      // so the operator appears before the
      // operands. We need to reverse the order
      // to obtain the postfix notation.
      string temp = val1 + val2 + exp[i];

      // Push the result back to the stack.
      stack.push(temp);
    }
  }

  return stack.top();
}

int main()
{
  string exp1,exp2 ;
  cout<<"enter postfix and prefix expressions repectively:\n";
  cin>>exp1>>exp2;

  cout << postfixToPrefix(exp1) << endl;
  cout << prefixToPostfix(exp2) << endl;
  return 0;
}