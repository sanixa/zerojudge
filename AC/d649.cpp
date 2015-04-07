#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a && a!=0)
    {
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                if(j>=a-i-1)
                    cout<<"+";
                else
                    cout<<"_";
            }
            cout<<endl;
        }
    }
}
