#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        cout<<(a/12)*50+(a%12)*5<<endl;
    }
}
