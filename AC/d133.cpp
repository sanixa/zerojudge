#include<iostream>
using namespace std;
int main()
{
    long long arr[30002]={};
    for(int i=0;i<30002;i++)
    {
        arr[i]=1;
    }
    for(int i=5;i<30002;i++)
    {
        arr[i]+=arr[i-5];
    }
    for(int i=10;i<30002;i++)
    {
        arr[i]+=arr[i-10];
    }
    for(int i=25;i<30002;i++)
    {
        arr[i]+=arr[i-25];
    }
    for(int i=50;i<30002;i++)
    {
        arr[i]+=arr[i-50];
    }
    int a;
    while(cin>>a)
    {
        if(arr[a]!=1)
        {
            cout<<"There are "<<arr[a]<<" ways to produce "<<a<<" cents change."<<endl;
        }
        else
        {
            cout<<"There is only 1 way to produce "<<a<<" cents change."<<endl;
        }
    }
}
