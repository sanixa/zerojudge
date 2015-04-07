#include<iostream>
using namespace std;
int findgcd(int b,int c)
{
    if(c==0)
        return b;
    return findgcd(c,b%c);
}
int main()
{
    int a,b;
    while(cin>>a>>b)
        cout<<findgcd(a,b)<<endl;
}
