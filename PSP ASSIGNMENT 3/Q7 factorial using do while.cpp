//do while loop (factorial)
#include <iostream>
using namespace std;
int main() 
{
    int n,factorial = 1,i = 1;
    cout << "Please enter a number : ";
    cin>> n;

do 
{
   factorial *= i;
   i++;
} while (i <= n);
  cout << factorial << endl;
}
