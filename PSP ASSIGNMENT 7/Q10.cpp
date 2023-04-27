/*
An EMPLOYEE class is to contain the following data members and member functions: Data
members: EmployeeNumber (an integer), EmployeeName (a string of characters),
BasicSalary (an integer), All Allowances (an integer), IT (an integer), NetSalary (aninteger).
 Member functions: to read the data of an employee, to calculate Net Salary and to print the values of
all the data members. (AllAllowances = 123% of Basic; Income Tax (IT) = 30% of the gross salary (=
basic Salary +AllAllowance); Net Salary = Basic Salary + All Allowances – IT)
(Write program using constructors, destructors, static data members and static Member functions)
*/
#include<iostream>
using namespace std;
class Employee
{
public :
static int EmployeeNumber;
string EmployeeName;
int BasicSalary;
int AllAllowances;
int IT;
int NetSalary;
int GrossSalary;
int n;
Employee()
{
fflush(stdin);
cin.clear();
EmployeeNumber++;
cout << "\nPlease Enter Employee Number " << EmployeeNumber << " details...";
cout << "\nPlease enter the Employee Name : ";
getline(cin,EmployeeName);
cout << "\nPlease enter the Basic Salary : ";
cin >> BasicSalary;
}
void calculation()
{
AllAllowances = 1.23 * BasicSalary;
GrossSalary = AllAllowances + BasicSalary;
IT = 0.3 * GrossSalary;
NetSalary = BasicSalary + AllAllowances - IT;
}
void showDetails()
{
cout << "\nEmployee Name : " << EmployeeName;
cout << "\nBasic Salary : " << BasicSalary;
cout << "\nGross Salary : " << GrossSalary;
cout << "\nNet Salary : " << NetSalary;
cout << "\nIncome Tax : " << IT;
}
~Employee()
{
cout << "\nEmployee " << n << "'s Details Done";
}
};
int Employee :: EmployeeNumber = 0;
int main()
{
int n;
cout << "\nPlease enter the number of Employees : ";
cin >> n;
Employee E[n];
for(int i = 0; i < n; i++)
{
//E[i].getDetails();
E[i].n = i + 1;
E[i].calculation();
}
for(int j = 0; j < n ; j++)
{
cout << "\nEmployee Number : " << j + 1;
E[j].showDetails();
cout << endl;
}
}
