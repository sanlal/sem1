#include<iostream>
using namespace std;

int main()
{
    float i,n,x,sum=0;
    float avg;

    cout<<"How many numbers u want to enter :: ";
    cin>>n;

    for(i=1;i<=n;++i)
    {
        cout<<"\nEnter number "<<i<<" :: ";
        cin>>x;

        sum+=x;
    }

    avg=sum/n;

    cout<<"\n\nAverage of "<<n<<" Numbers :: "<<avg;

    cout<<"\n";

    return 0;
}
