#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int a;
    while(cin>>a,a!=0)
    {
        int iarr[100];
        for(int i=0;i<a;i++)
        {
            cin>>iarr[i];
        }
        double con=0,down=a*(a-1)/2;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                if(gcd(iarr[i],iarr[j])==1)
                    con++;
            }
        }
        con/=2;
        if(con==0)
            printf("No estimate for this data set.\n");
        else
            printf("%.6f\n",sqrt(6*down/con));
    }
}
