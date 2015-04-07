
#include<iostream>
#include<cstdio>
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

void build_prime() //質數建表
{
    for(int i=2,n=11;n<1000000 ;n+=i,i=6-i) //6n+1,6n+5
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
    while(scanf("%d",&a) )
    {
        if(a==0)
            break;
        cout<<a<<" = ";
        if(a==1)
        {
                cout<<"1"<<endl;
                continue;
        }
        int pri[100000]={};
        int con=0;
        if(a<0)
        {
            a=-a;
            pri[0]=-1;
            con++;
        }
        for(int i=0; i<len && p[i]<=a;i++) //將質因數存入陣列
        {
            while(a%p[i]==0)
            {
                a/=p[i];
                pri[con]=p[i];
                con++;
            }
        }
        if(a!=1)
        {
            pri[con]=a;
            con++;
        }
        for(int i=0;i<con;i++)  // 輸出
        {
            if(i != (con-1))
                cout<<pri[i]<<" x ";
            else
                cout<<pri[i]<<endl;
        }
    }
}
