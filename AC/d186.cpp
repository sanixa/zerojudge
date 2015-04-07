#include<iostream>
using namespace std;
int arr[400]={};
void build()
{
    for(int i=0;i<316;i++)
    {
        arr[i]=(i+1)*(i+1);
    }
}
int main()
{
    build();
    int a,b;
    while(cin>>a>>b, a!=0 || b!=0)
    {
        int count=0;
        for(int i=0;i<316;i++)
        {
            if(arr[i]>=a && arr[i]<=b)
                count++;
        }
        cout<<count<<endl;
    }
}
