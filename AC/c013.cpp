#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int b,c;
        cin>>b>>c;
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<b;k++)
            {
                for(int l=0;l<k+1;l++)
                    cout<<k+1;
                cout<<endl;
            }
            for(int k=b-2;k>=0;k--)
            {
                for(int l=0;l<k+1;l++)
                    cout<<k+1;
                cout<<endl;
            }
        }
    }
}
