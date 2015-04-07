#include<iostream>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    while(a--)
    {
        long long b,cal=0;
        cin>>b;
        while(b--)
        {
            long long c,d,e;
            cin>>c>>d>>e;
            cal+=c*e;
        }
        cout<<cal<<endl;
    }
}
