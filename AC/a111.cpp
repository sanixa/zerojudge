#include<iostream>
using namespace std;
int main()
{
    long long a;
    while(cin>>a)
    {
        if(a==0)
            break;
        cout<<a*(a+1)*(a*2+1)/6<<endl;
    }
}
