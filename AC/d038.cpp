#include<iostream>
using namespace std;
long long arr[100];
void build(int i=3)
{
    if(i==51)
        return;
    arr[i]=arr[i-1]+arr[i-2];
    build(i+1);
}
int main()
{
    arr[1]=1;
    arr[2]=2;
    build();
    int a;
    while(cin>>a && a!=0)
    {
        cout<<arr[a]<<endl;
    }
}
