#include<iostream>
using namespace std;
int p[1000000]={2,3,5,7};
int len=4;
int is_prime(int n)
{
    if(n<2) return 0;
    for(int i=0;i<len && p[i]*p[i]<=n && p[i] !=0;i++)
    {
        if(n%p[i]==0)
            return 0;
    }
    return 1;
}

void build_prime()
{
    for(int i=2,n=11;n<2100000;n+=i,i=6-i) //6n+1,6n+5
    {
        if(is_prime(n))
        {
            p[len]=n;
            len++;
        }
    }

}

int main()
{
    long long a=0,ans=0;
    build_prime();
    for(int i=0;i<len;i++)
    {
        if(p[i]>=2000000)
        {
            a=i;
            break;
        }
    }
    for(int i=0;i<a;i++)
    {
        ans+=p[i];
    }
    cout<<ans;
}
