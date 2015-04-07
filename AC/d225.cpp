#include<iostream>
#include<cstdio>
#include<cstdlib>
using  namespace std;
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
    for(int i=2,n=11;n<30 ;n+=i,i=6-i) //6n+1,6n+5
    {
        if(is_prime(n))
        {
            p[len]=n;
            len++;
        }
    }

}
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    build_prime();
    int a,g;
    while(cin>>a,a)
    {
        g=0;
        for(int i=1;i<a;i++)
        {
            if(is_prime(i))
            {
                g+=(a/i-1)*i+(a-i-a/i+1);
                continue;
            }
            for(int j=i+1;j<=a;j++)
            {
                if(is_prime(j))
                {
                    g++;
                    continue;
                }
                g+=gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
}
