#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double t1,t2,t3,x1,x3;
    while(cin>>t1>>t2>>t3>>x1>>x3)
    {
        double d=(t1-t3)/(x1-x3);
        printf("%f\n",x1-(t1-t2)/d);
    }
}
