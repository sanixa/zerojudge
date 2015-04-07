#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<pow(a,b)<<endl;
        cin>>a;
            printf("%.3f\n",sqrt(a));
        cin>>a;
            cout<<abs(a)<<endl;
        cin>>a>>b;
            cout<<rand()%(b-a)+a<<endl;
    }
}
