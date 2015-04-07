#include<iostream>
using namespace std;
long long findgcd(long long b,long long c)
{
    if(c==0)
        return b;
    return findgcd(c,b%c);
}
int main()
{
    long long a,arr[20],lcm;
    while(cin>>a && a!=0)
    {
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        lcm=arr[0];
        for(int i=0;i<a-1;i++)
        {
            lcm=lcm*arr[i+1]/findgcd(lcm,arr[i+1]);
        }
        cout<<lcm<<endl;
    }
}
