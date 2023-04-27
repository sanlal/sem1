/*
Q6) Write a program in C++ to print Floyd’s Triangle by using the constructor destructor.
*/
#include<iostream>
using namespace std;
class Floyds_Triangle
{
   public:
   int i,n,j,p = 1;
   //constructor
   Floyds_Triangle()
   {
     cout<<"\n Enter the number of rows : ";
     cin>>n;
      for(i=1;i<=n;i++)
      {
        for(j=1;j<=i;j++)
         {
          cout<< p << " ";
          p++;
         }
         cout << endl;
      }
   }
   ~Floyds_Triangle() // destructor
   {
   cout << "\n***********Floyds Triangle Printed**********";
   }
};
int main()
{
   Floyds_Triangle obj;
   return 0;
}
