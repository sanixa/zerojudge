#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        int b;
        for(int i=0;i<a;i++)
        {
            cin>>b;
        }
        for(int i=1;i<=a;i++)
        {
            if(i!=a)
                cout<<i<<" ";
            else
                cout<<i<<endl;
        }
    }
}
