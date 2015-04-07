#include<iostream>
using namespace std;
int main()
{
    unsigned long long a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        if(a>b)
            cout<<"Unfair"<<endl;
        else
            cout<<"Fair"<<endl;
    }
}
