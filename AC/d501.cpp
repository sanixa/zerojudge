#include<iostream>
using namespace std;
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

int values[1000000] = { };

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
    int n,k;
    while(cin>>k)
    {
        for(int i=0;i<k;i++)
        {
            scanf("%d",&values[i]);
        }
        qsort (values, k, sizeof(int), compare);
        if(k%2==0)
        {
            if(values[k/2-1]==values[k/2])
                cout<<"A="<<values[k/2]<<endl;
            else
            {
                cout<<"A=";
                for(int i=values[k/2-1];i<=values[k/2];i++)
                {
                    if(i!=values[k/2])
                        cout<<i<<"、";
                    else
                        cout<<i;
                }
                cout<<endl;
            }
                //cout<<"A="<<values[k/2-1]<<"¡B"<<values[k/2]<<endl;
        }
        else
            cout<<"A="<<values[k/2]<<endl;
    }
}
