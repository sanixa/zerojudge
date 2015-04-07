#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        int b =a,k=0;
        int iarr[10000];
        if(a==0) cout<<0;
        //if(a==8) cout<<1000;
        while(a!=0)
        {
            iarr[k]=a%2;
            a/=2;
            k++;
        }
        for(int i=0;i<k;i++)
        {
            cout<<iarr[(int)k-i-1];
        }
        cout<<endl;
    }
}
