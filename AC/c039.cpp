#include<iostream>
using namespace std;
int cal(int i1,int len=1)
{
    if(i1==1)
        return len;
    return cal( (i1%2==0) ? i1/2 : i1*3+1 , len+1 );

}

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<a<<" "<<b<<" ";
        int ans=0;
        if(a<=b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        for(int i=b;i<=a;i++)
        {

            int c=cal(i);
             if(c>ans)
                ans=c;
        }
        cout<<ans<<" "<<endl;
    }
}


