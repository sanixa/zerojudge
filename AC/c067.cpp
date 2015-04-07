#include<iostream>
using namespace std;
int main()
{
    int a,con=1;
    while(cin>>a)
    {
        if(a==0)
            break;
        int iarr[100],total=0,ans=0;
        for(int i=0;i<a;i++)
        {
            cin>>iarr[i];
            total+=iarr[i];
        }
        total/=a;
        for(int i=0;i<a;i++)
        {
            if(iarr[i]>total)
                ans+=(iarr[i]-total);
        }
        cout<<"Set #"<<con<<endl;
        cout<<"The minimum number of moves is "<<ans<<"."<<endl;
        cout<<endl;
        con++;
    }
}
