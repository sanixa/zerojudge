#include<iostream>
using namespace std;
int cal(int c,int d,int e=0)
{
    if(c==0)
        return c;
    return c + cal((c+e)/d,d,(c+e)%d);
}

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<cal(a,b)<<endl;
    }
}
/* loop
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int ans=0,d=a;
        while(a/b !=0)
        {
            int c=a;
            ans+=a/b;
            a%=b;
            a+=c/b;
        }
        ans+=d;
        cout<<ans<<endl;
    }
}
*/
