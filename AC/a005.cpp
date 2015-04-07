#include <iostream>
using namespace std;
int main()
{
    int x,a,b,c,d,e ;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>a>>b>>c>>d;
        if((b-a)==(c-b))
        {
            e=d+b-a;
            cout<<a<<" "<< b<<" " <<c<<" "<< d<<" "<< e<<"\n";
        }else
        {
            e=d*b/a;
           cout<<a<<" "<< b<<" " <<c<<" "<< d<<" "<< e<<"\n";
        }
    }
    return 0;
}
