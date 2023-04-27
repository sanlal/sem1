//Q6 CNF formula to DNF
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// function to convert CNF formula to DNF
string convertToDNF(string cnf)
{
// split the string into clauses separated by '&'
vector<string> clauses;
string clause = "";
for (char ch: cnf)
{
if (ch == '&')
{
clauses.push_back(clause);
clause = "";
}
else
clause += ch;
}
clauses.push_back(clause);

// split each clause into terms separated by '|'
vector<vector<string>> terms;
for (string clause: clauses)
{
    vector<string> termList;
    string term = "";
    for (char ch: clause)
    {
        if (ch == '|')
        {
            termList.push_back(term);
            term = "";
        }
        else
            term += ch;
    }
    termList.push_back(term);
    terms.push_back(termList);
}

// convert each clause to DNF
vector<vector<string>> dnfTerms;
for (auto termList: terms)
{
    vector<string> dnfTermList;
    for (string term: termList)
    {
        string dnfTerm = "";
        for (char ch: term)
        {
            // negate negated terms and remove negation from others
            if (ch == '!')
                dnfTerm += (dnfTerm.length() == 0) ? "" : "|";
            else
                dnfTerm += ch;
        }
        dnfTermList.push_back(dnfTerm);
    }
    dnfTerms.push_back(dnfTermList);
}

// combine all terms into a single DNF formula
string dnf = "";
for (auto termList: dnfTerms)
{
    for (string term: termList)
        dnf += term + "&";
    dnf.pop_back(); // remove last '&'
    dnf += "|";
}
dnf.pop_back(); // remove last '|'

return dnf;
}

int main()
{
string cnf = "!x1|!x2&!x3|x4&x5";

string dnf = convertToDNF(cnf);

cout << "CNF formula: " << cnf << endl;
cout << "DNF formula: " << dnf << endl;

return 0;
}