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
    for(int i=2,n=11;n<2000 ;n+=i,i=6-i) //6n+1,6n+5
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
    build_prime();
    int a;
    int arr[10000]={},counter=0;
    while(cin>>a)
    {
        for(int i=0;p[i]*p[i]<=a;i++)
        {

            if(a%p[i]==0)
            {
                counter=0;
                while(1)
                {
                    if(a%p[i]!=0 && counter!=1)
                    {
                        cout<<p[i]<<"^"<<counter<<(a==1 ? "\n" : " * ");
                        break;
                    }
                    if(a%p[i]!=0 && counter==1)
                    {
                        cout<<p[i]<<(a==1 ? "\n" : " * ");
                        break;
                    }
                    a/=p[i];
                    counter++;
                }
            }
        }
        if(a!=1)
        {
            cout<<a<<endl;
        }
    }
}
