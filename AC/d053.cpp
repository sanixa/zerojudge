#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a<b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        if(b==1)
            cout<<a-1<<endl;
        else
            cout<<(b-1)+b*(a-1)<<endl;
    }
}
