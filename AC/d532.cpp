# include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int iarr[10000];
    for(int i =0;i<8247;i++)
    {
        iarr[i]=1753+i;
    }
    int cal=0;
    for(int i=0;i<=(b-a);i++)
    {
            if(iarr[i+a-1753]%4!=0)
            {

            }else if(iarr[i+a-1753]%100!=0)
            {
                cal++;
            }else if(iarr[i+a-1753]%400!=0)
            {

            }else
            {
                cal++;
            }
    }
    cout<<cal<<endl;
    return 0;
}
