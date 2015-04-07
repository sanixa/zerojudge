#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d,a!=0 || b!=0 || c!=0 || d!=0)
    {
        if(c*60+d-a*60-b<0)
            cout<<1440+c*60+d-a*60-b<<endl;
        else
            cout<<c*60+d-a*60-b<<endl;
    }
}
