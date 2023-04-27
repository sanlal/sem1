//ii) sum of the following series  1+1.2+1.2.3+1.2.3.4+.............+n

#include <iostream>
using namespace std;
int main()
{
    int trm;
    double num, sum, i, m;
    cout << "\n\n calculate the sum of the series 1.2+2.3+3.4+4.5+5.6+......:\n";
    cout << "----------------------------------------------------------------\n";
    cout << " Input the last integer between 1 to 98 without fraction you want to add: ";
    cin >> trm;
    for (i = 1; i <= trm; i++) 
    {
        if (i < 9) 
        {
            m = .1;
        }
        else 
        {
            m = .01;
        }
        num = i + ((i + 1) * (m));
        sum = sum + num;
        cout << num;
        if (i < trm) 
        {
            cout << " + ";
        }
    }
    cout << "\n The sum of the series =" << sum << endl;
}

