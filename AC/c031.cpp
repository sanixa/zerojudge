#include<iostream>
using namespace std;
long long arr[10000]={};
void build()
{
    arr[0]=1;
    for(int i=1;i<5000;i++)
    {
       arr[i]=arr[i-1]+i+1;
    }
}
int main()
{
    build();
    int a;
    while(cin>>a)
    {
        int b=0,c=0;
        for(int i=0;i<5000;i++)
        {
            if(a>arr[i] && a<arr[i+1])
            {
                b=i+3;
                c=a-arr[i];
                if(b%2==1)
                    cout<<"TERM "<<a<<" IS "<<c<<"/"<<b-c<<endl;
                else
                    cout<<"TERM "<<a<<" IS "<<b-c<<"/"<<c<<endl;
                break;
            }
            else if(a==arr[i])
            {
                b=i+2;
                c=1;
                if(b%2==1)
                    cout<<"TERM "<<a<<" IS "<<b-c<<"/"<<c<<endl;
                else
                    cout<<"TERM "<<a<<" IS "<<c<<"/"<<b-c<<endl;
                break;
            }
        }
    }

}
