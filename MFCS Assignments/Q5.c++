//Q5 AND operator
#include <iostream>
#include <string>
using namespace std;

#define AND &&
#define OR ||
#define NOT !

bool P = true;
bool Q = true;

int main() {
  cout << "P\tQ\tPandQ" << endl;

  cout << P << "\t" << Q << "\t" << (P AND Q) << endl;

  P = true; Q = false;
  cout << P << "\t" << Q << "\t" << (P AND Q) << endl;

  P = false; Q = true;
  cout << P << "\t" << Q << "\t" << (P AND Q) << endl;

  P = false; Q = false;
  cout << P << "\t" << Q << "\t" << (P AND Q) << endl;

  return 0;
}