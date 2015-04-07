#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int b,c,d;
        cin>>b>>c>>d;
        if(b!=c && c!=d && b!=d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
