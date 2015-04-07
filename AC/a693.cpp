#include<iostream>
using namespace std;
int main()
{
    int a,b,l,r,arr[100000],total[100000];
    while(cin>>a>>b)
    {
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            if(i!=0)
                total[i]=arr[i]+total[i-1];
            else
                total[i]=arr[i];
        }
        for(int i=0;i<b;i++)
        {
            cin>>l>>r;
            if(l==1)
                cout<<total[r-1]<<endl;
            else
                cout<<total[r-1]-total[l-2]<<endl;
        }
    }
}
