#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        if(a%2!=0 && b%2!=0)
            cout<<(b-a)/2<<endl;
        else
            cout<<(b-a)/2+1<<endl;
    }
}
