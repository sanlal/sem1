//do while loop (program to compute factorial of a given number)
#include <iostream>
using namespace std;
int main() {
int n, fact=0, i = 1;
cout << "Enter the number ::: "<<endl;
cin>> n;
do {
fact *= i;
i++;
} while (i <= n);
cout << fact << endl;
}
