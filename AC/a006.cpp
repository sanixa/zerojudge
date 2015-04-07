#include <iostream>
#include "math.h"
using namespace std;
int main()
{
    int a,b,c;
    double x1,x2;
    while(cin>>a>>b>>c)
    {
        if((b*b-4*a*c)>0)
        {
            x1= (-b+pow(b*b-4*a*c,0.5))/(a*2);
            x2= (-b-pow(b*b-4*a*c,0.5))/(a*2);
            cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<"\n";
        }else if((b*b-4*a*c)==0)
        {
            x1=-b/(a*2);
            cout<<"Two same roots x="<<x1<<"\n";
        }else
        {
            cout<<"No real root"<<"\n";
        }
    }
    return 0;
}
