/*
Q2 In a town the percentage of men is 52 the percentage of
total literacy is 48 if total percentage of literate men is
35 of the total population write a program to find the
total no of the literate men and women if the population of
the town is 80,000
*/

#include<iostream>
using namespace std;

int main()
{
    int per_men, tot_men, tot_lit_pop, tot_lit_per;
    int men_lit_per, tot_lit_men, tot_lit_wom;
    int tot_wom, ilt_wom, ilt_men, tot_pop=80000;
	per_men=52;
	tot_men=tot_pop*per_men/100;
	tot_lit_per=48;
	tot_lit_pop=tot_pop*tot_lit_per/100;
	men_lit_per=35;
	tot_lit_men=tot_pop*men_lit_per/100;
	tot_lit_wom=tot_lit_pop-tot_lit_men;
	tot_wom=tot_pop-tot_men;
	ilt_men=tot_men-tot_lit_men;
	ilt_wom=tot_wom-tot_lit_wom;
	
	cout<<"Total Population      = "<<tot_pop<<endl;
	cout<<"Total number of Men   = "<<tot_men<<endl;
	cout<<"Total number of Literate Population = "<<tot_lit_pop<<endl;
	cout<<"Total number of Literate Men =  "<<tot_lit_men<<endl;
	cout<<"Total number of Literate Women =  "<<tot_lit_wom<<endl;
	cout<<"Total number of Women =   "<<tot_wom<<endl;
	cout<<"Total number of Illiterate Men =   "<<ilt_men<<endl;
	cout<<"Total number of Illiterate Women =   "<<ilt_wom<<endl;
	return 0;
}
