#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b,c;
    while(cin>>b>>c)
    {
        if(b>c)
        {
            cout<<">"<<endl;
        }
        else if(b==c)
        {
            cout<<"="<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
    }
}
