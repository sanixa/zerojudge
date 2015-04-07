#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        double cal=0;
        for(int i=0;i<a;i++)
        {
            int b=0;
            cin>>b;
            cal+=b;
        }
        if(cal/a>59)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }
}
