#include<iostream>
using namespace std;
int main()
{
    int iarr[100000];
    int a;
    while(cin>>a)
    {
        for(int i=0;i<a;i++)
        {
            cin>>iarr[i];
        }
        for(int i=0;i<a;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                if(iarr[i]>iarr[j])
                {
                    int c=0;
                    c=iarr[i];
                    iarr[i]=iarr[j];
                    iarr[j]=c;
                }
            }
        }
        for(int i=0;i<a;i++)
        {
            cout<<iarr[i]<<" ";
        }
        cout<<endl;
    }
}
