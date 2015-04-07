#include <stdio.h>
#include <stdlib.h>
using namespace std;


int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

int main ()
{
  int n,k,i=0,values[100002]={};
  while(scanf("%d",&k) !=EOF)
  {
      values[i]=k;
      i++;
  }
  qsort (values,i, sizeof(int), compare);
  for (n=0; n<i; n++)
     printf ("%d ",values[n]);
  return 0;
}
