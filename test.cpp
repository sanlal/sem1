#include <iostream>
#include <string>
using namespace std;
int FirstFactorial(int num);

int main() { 
   int num;
   cin>>num;
  // keep this function call here
  cout << FirstFactorial(num);
  return 0;
    
}

int FirstFactorial(int num) {
  //int a;
  num = num * FirstFactorial(num - 1);
  // code goes here  
  return num;

}


