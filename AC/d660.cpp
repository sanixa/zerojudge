#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int arr[100]={};
        cin>>b;
        for(int j=0;j<b;j++)
        {
            cin>>arr[j];
        }
        int high=0,low=0;
        for(int j=0;j<(b-1);j++)
        {
            if(arr[j]>arr[j+1])
                low++;
            else if(arr[j]<arr[j+1])
                high++;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }
}
