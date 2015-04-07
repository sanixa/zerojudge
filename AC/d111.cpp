#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    while(cin>>a,a!=0)
    {
        if(sqrt(a)==(int)sqrt(a))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
