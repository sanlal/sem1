//Q7 PCNF TO PDNF
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string pdnf_to_pcnf(string pdnf) 
{
// split the string on 'v' and store in a vector
vector<string> disjuncts;
size_t pos = 0;
string token;
while((pos = pdnf.find('v')) != string::npos) {
token = pdnf.substr(0, pos);
disjuncts.push_back(token);
pdnf.erase(0, pos + 1);
}
// add the last disjunct
disjuncts.push_back(pdnf);


// split each disjunct on '^' and store in a vector
vector<string> conjuncts;
for (string disjunct : disjuncts) {
    while((pos = disjunct.find('^')) != string::npos) {
        token = disjunct.substr(0, pos);
        conjuncts.push_back(token);
        disjunct.erase(0, pos + 1);
    }
    // add the last conjunct
    conjuncts.push_back(disjunct);
}

// combine conjuncts into a single string with '^' separators
string pcnf = conjuncts[0];
for (int i = 1; i < conjuncts.size(); i++) {
    pcnf += "^" + conjuncts[i];
}

return pcnf;
}

int main() {
string pdnf = "(a^b)v(c^d)";
string pcnf = pdnf_to_pcnf(pdnf);
cout << "PDNF: " << pdnf << endl;
cout << "PCNF: " << pcnf << endl;
return 0;
}