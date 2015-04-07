#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int b=0,c=0;
        cin>>b>>c;
        int d=0,e=0;
        d=pow(b,0.5);
        e=pow(c,0.5);
        if(d==e)
        {
            cout<<"0";
        }
        if(d*d==b) //判斷完全平方數
        {
            d-=1;
        }
        int cal=0;
        cal=(e*(e+1)*(e*2+1)-d*(d+1)*(d*2+1))/6;
        cout<<"Case"<<" "<<i+1<<":"<<" "<<cal<<endl;
    }
}
