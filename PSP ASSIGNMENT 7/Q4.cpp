/*
Q4) Try with distractor (with same program Q1)
*/
#include <iostream>
using namespace std;
class Example
{
  private:
  int val;
  public:
//constructor declarations
  Example()
  {
  val = 0;
  }
  Example(int);
  ~Example();
};

//constructor definitions
Example :: Example(int v)
{
  val=v;
}
Example :: ~Example()
{
  cout<<"\nval: "<<val<<endl;
  if(val == 100)
  cout << "\nDestructor for parameterized constructor"<<endl;
  if(val == 0)
  cout << "\nDestructor for Default consructor"<<endl;
}
int main()
{
//create object
   Example Ex(100); //local obj
   Example obj;
   return 0;
}
