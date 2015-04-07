#include<iostream>
using namespace std;
int iarr[1000000];
int main()
{
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
                if(iarr[i]<iarr[j])
                {
                    int  temp =iarr[i];
                    iarr[i]=iarr[j];
                    iarr[j]=temp ;
                }
            }
        }
        cout<<iarr[0]<<endl;
    }
}
