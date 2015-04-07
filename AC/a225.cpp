#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        int iarr[1001];
        for(int i=0;i<a;i++)
        {
            cin>>iarr[i];
        }
        for(int i=0;i<a;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                if(iarr[i]%10>iarr[j]%10)
                {
                    int b=iarr[i];
                    iarr[i]=iarr[j];
                    iarr[j]=b;
                }
                else if(iarr[i]%10==iarr[j]%10 && iarr[i]<iarr[j])
                {
                        int b=iarr[i];
                        iarr[i]=iarr[j];
                        iarr[j]=b;
                }
            }
        }
        for(int i=0;i<a;i++)
        {
            if(i!=a-1)
                cout<<iarr[i]<<" ";
            else
                cout<<iarr[i];
        }
        cout<<endl;
    }
}
