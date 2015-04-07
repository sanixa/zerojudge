#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int b;
        cin>>b;
        int arr[100000],k=0;
        while(b !=0)
        {
            if(b%2 ==0)
            {
                b/=2;
                arr[k]=0;
                k++;
            }
            else
            {
                b/=2;
                arr[k]=1;
                k++;
            }
        }
        int start=0,endd=0;
        bool b1=true,b2=false,b3=false;
        for(int i=0;i<k;i++)
        {
            while(b1)
            {
                if(arr[i]==0)
                {
                    start=i;
                    b1=false;
                    b2=true;
                }
                break;
            }
            while(b2)
            {
                if(arr[i]==1)
                {
                    endd=i;
                    b1=true;
                    b2=false;
                    b3=true;
                }
                break;
            }
            while(b3)
            {
                for(int j=start;j<endd;j++)
                {
                    if(j==start)
                        arr[j]=2;
                    else
                        arr[j]=1;
                }
                b3=false;
                arr[endd]=0;
                i--;
            }
        }
        int ans=0;
        for(int i=0;i<k;i++)
        {
            ans+=arr[i];
        }
        cout<<ans<<endl;
    }
}
