#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    int c=0,d=0,e=0;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        if(b%3==0)
        {
            c++;
        }
        else if(b%3==1)
        {
            d++;
        }
        else
        {
            e++;
        }
    }
    cout<<c<<" "<<d<<" "<<e;
    return 0;
}
