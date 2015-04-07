#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        int k=0,arr[100]={};
        if(a <0)
        {
            a=-a;
            arr[0]='-';
            k++;
        }
        while(a !=0)
        {
            arr[k]=a%10;
            a/=10;
            k++;
        }
        bool b1=false;
        for(int i=0;i<k;i++ )
        {
            bool b2=true;
            if(arr[i]=='-')
            {
                 cout<<'-';
                 continue;
            }
            if(arr[i] !=0)
                b1=true;
            while(b1 && b2)
            {
                cout<<arr[i];
                b2=false;
            }
        }
        cout<<endl;
    }
}
