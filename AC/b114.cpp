#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double a,b,c,d,x,y;
    while(cin>>a>>b>>c>>d)
    {
        x=(c-d)/(b-a);
        y=(c*b-d*a)/(b-a);
       /* if(x == (int)(x))
        {
            cout<<x<<endl;
        }else if((int)(x*100)%10 ==0 )
        {
            printf("%.1f\n",x);
        }else
        {
            printf("%.2f\n",x);
        }

        if(y == (int)(y))
        {
            cout<<y<<endl;
        }else if((int)(y*100)%10 ==0 )
        {
            printf("%.1f\n",y);
        }else
        {
            printf("%.2f\n",y);
        }*/
        x = x != -0 ? x:0;
        y = y != -0 ? y:0;
        printf("%g\n",x);
        printf("%g\n",y);
       // (c-d)/(b-a)
        //(c*b-d*a)/(b-a)
    }
}
