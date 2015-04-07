#include<iostream>
using namespace std;
int main()
{
    long long a;
    while(cin>>a)
    {
        long long b=0,c=0;
        for(int i=1;i<a+1;i++)
        {
            b+=i;
            c=c+b;
        }
        cout<<b<<" "<<c<<endl;
    }
}
