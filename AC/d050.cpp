#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        if(a==15)
            cout<<"0"<<endl;
        else
            printf("%d\n",a-15>0 ? a-15 : a+9);
    }
}
