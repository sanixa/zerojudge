#include<iostream>
using namespace std;
int a,b,ans=0,s1[101]={},s2[101]={},arr[101][101]={},prev[101][101]={};
void LCS()
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(s1[i]==s2[j])
            {
                arr[i][j]=arr[i-1][j-1]+1;
                prev[i][j]=1;
            }
            else
            {
                if(arr[i][j-1]>arr[i-1][j])
                {
                     arr[i][j]=arr[i][j-1];
                     prev[i][j]=2;
                }
                else
                {
                     arr[i][j]=arr[i-1][j];
                     prev[i][j]=3;
                }
            }
        }
    }
}

void cal(int i,int j)
{
    if(i==0 || j==0)
        return;
    if(prev[i][j]==1)
    {
        ans++;
        cal(i-1,j-1);
    }
    else if(prev[i][j]==2)
        cal(i,j-1);
    else if(prev[i][j]==3)
        cal(i-1,j);

}
int main()
{
    int k=1;
    while(cin>>a>>b && a!=0 && b!=0)
    {
        for(int i=1;i<=a;i++)
        {
            cin>>s1[i];
        }
        for(int i=1;i<=b;i++)
        {
            cin>>s2[i];
        }
        LCS();
        cal(a,b);
        cout<<"Twin Towers #"<<k<<endl;
        k++;
        cout<<"Number of Tiles : "<<ans<<endl;
        extern int ans;
        ans=0,s1[101]={},s2[101]={},arr[101][101]={};
    }
}
