#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0 &&b==0)
            break;
        if(a%2==b%2)
            cout<<"Win"<<endl;
        else
            cout<<"Loss"<<endl;
    }

}
