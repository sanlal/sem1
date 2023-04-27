/*If the total selling price of 15 items and 
the total profit earned on them is input through the keyboard. Write a program to find the cost price of one item.
*/
#include<iostream>
using namespace std;

int main()
{
    float s, p, c;  //s= selling price, p= profit, c= cost price

    cout<<"Enter the selling price of 15 items: ";
    cin>>s;
    cout<<"Enter the profit on 15 items: ";
    cin>>p;

    //code to calculate cost of an item 'cost price = (selling price - profit)/15'
    c = (s-p)/15;

    cout<<"The cost price of an item is : " << c;
    return 0;
}
