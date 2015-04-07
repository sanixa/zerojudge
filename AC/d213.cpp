

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long arr[100]={};
    for(int j=0;j<64;j++)
    {
        arr[j]+=pow(2,2+j)-1-1;
    }
    for(int i=10;i<64;i++)
    {
        arr[i]-=pow(2,i-8)-1-1;
    }
    for(int i=53;i<64;i++)
    {
        arr[i]-=2;
    }
    int n=0;
    while(cin>>n)
    {
        cout<<arr[n]<<endl;
    }
}
