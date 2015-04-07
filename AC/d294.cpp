#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        long long ans=0;
        for(long long i=1;i<=a;i++)
        {
            for(long long j=1;j<=b;j++)
            {
                ans+=i*j;
            }
        }
        cout<<ans<<endl;
    }
}
