#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int iarr[100000]={};
    for(int i=0;i<a;i++)
    {
        int b;
        cin>>b;
        for(int j=0;j<b;j++)
        {
            cin>>iarr[j];
        }
        int ans=0,dis=0;
        for(int k=0;k<b-1;k++)
        {
            if((iarr[k+1]-iarr[k])>dis)
            {
                dis=iarr[k+1]-iarr[k];
                ans=k;
            }
        }
        cout<<ans+1<<endl;
    }
}
