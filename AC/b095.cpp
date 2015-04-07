#include<iostream>
#include <algorithm>
using namespace std;
int main()
{

    int ans=0,arr[100]={};
    while(cin>>arr[0]>>arr[1])
    {
        int con=0;
        bool b1=false;
        ans=max(arr[0],arr[1]);
        for(int i=2;i<32;i++)
        {
            cin>>arr[i];
            if(arr[i] !=0 && arr[i] !=ans)
                con++;
            if(con ==3)
            {
                con=i;
                break;
            }
            if(arr[i]==ans)
            {
                con=i;
                b1=true;
                break;
            }
        }
        if(b1)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
        for(int i=con+1;i<32;i++)
        {
            cin>>arr[i];
        }
    }
}
