#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int b,ans=0;
        cin>>b;
        if(b/27!=0)
        {
            ans+=b/27;
            b-=b/27*27;
        }
        if(b/9!=0)
        {
            ans+=b/9;
            b-=b/9*9;
        }
        if(b/3!=0)
        {
            ans+=b/3;
            b-=b/3*3;
        }
        ans+=b;
        cout<<ans<<endl;
    }
}
