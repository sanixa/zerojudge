#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int num=0;
        cin>>num;
        int  str[100000]={};
        for(int i=0;i<num;i++)
        {
            cin>>str[i];
        }
        qsort (str, num , sizeof(int), compare);
        int ans=0;
        for(int i=2;i<num;i+=3)
        {
           ans+=str[i];
        }
        cout<<ans<<endl;
    }
}
