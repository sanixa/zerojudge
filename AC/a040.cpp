#include<iostream>
#include<math.h>
using namespace std;
int ans[100]={},pow_arr[9][10]={},num[10]={},amon=0;
int mypow(int i1,int i2)
{
    if(!pow_arr[i1][i2])
    {
        pow_arr[i1][i2]=1;
        for(int i=0;i<i1;i++)
            pow_arr[i1][i2]*=i2;
    }
    return  pow_arr[i1][i2];
}
int fa(int t)
{
    int n=0;
    while(t>0)
    {
        num[n]=t%10;
        n++;
        t/=10;
    }
    return n;
}

void build()
{
    for(int i=1;i<1000000;i++)
    {
        int len=fa(i),sum=0;
        for(int j=0;j<len;j++)
        {
           sum+=mypow(len,num[j]);
        }
        if(i==sum)
        {
            ans[amon++]=i;
        }
    }
}
 int main()
 {
 	build();
    int a,b;
    while(cin>>a>>b)
    {
        bool b1=true;
        for(int i=0;i<amon && ans[i]<=b;i++)
        {
            if(ans[i]>=a)
            {
                b1=false;
                cout<<ans[i]<<" ";
            }
        }
        if(!b1)
             cout<<endl;
        else
            cout<<"none"<<endl;
    }
 }
