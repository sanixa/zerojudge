#include<iostream>
#include<cstdio>
using namespace std;
int f91(int b)
{
    if(b>=101)
        return b-10;
    else
        return  f91( f91( b+11) );
}
int main()
{
    int a;
    while(cin>>a)
    {
        if(a==0)
            break;
        printf("f91(%d) = %d\n",a,f91(a));
    }
}
