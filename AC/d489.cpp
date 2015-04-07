#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        cout<<(a+b+c)/2*(b+c-a)/2*(a+c-b)/2*(a+b-c)/2;
    }
}
