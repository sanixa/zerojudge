#include<iostream>
using namespace std;
int main()
{
    long long a;
    while(cin>>a)
    {
        //cout<<(a>0)*1+(a==0)*0+(a<0)*(-1)<<endl; áháhµÄQQ
        cout<<(a>0)-(a<0)<<endl;
    }
}
