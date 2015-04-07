#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
/*long long arr[1000000];
void build_form()
{
    for(int i=1;i<1000000;i++)
    {
        arr[i]=(i)*(i+1)/2;
    }
}
int main()
{
    build_form();
    int k=0;
    for(int i=0;i<1000000;i++)
    {
        for(int j=i/2;j<i;j++)
        {
            if((arr[i]-j)%2==0)
            {
                if((arr[i]-j)/2==arr[j-1])
                {
                    printf("%10d%10d\n",j,i);
                    k++;
                    break;
                }
            }
        }
        if(k==10)
            break;
    }
}
*/
int main()
{
    int con=0;
    for(long long i=2;con<10;i++)
    {
        long long sum=(i*i+i)/2;
        double n=sqrt(sum);
        if(n ==(int)n)
        {
             printf("%10d%10d\n",(int)n,i);
             con++;
        }
    }
}
