#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    int a=0;
    cin>>a;
    cin.get();
    while(getline(cin,str))
    {
        int count =0,ans=0;
        for(int j=0;j<str.length();j++)
        {
            if(str[j]==43 )
            {
                int cal=1;
                for(int k=count;k<j;k+=2)
                {
                    cal*=str[k]-48;
                }
                ans+=cal;
                count =j+1;
            }
            else if( j==str.length()-1 && str[str.length()-2] !=42)
                ans+=str[j]-48;
        }
        if(str[str.length()-2] ==42)
        {
            int cal2=1;
            for(int i=count;i<=str.length()-1;i+=2)
            {
                cal2*=str[i]-48;
            }
            ans+=cal2;
        }
        cout<<ans<<endl;
    }
}
