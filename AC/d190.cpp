//#include<iostream>
//#include <cstdlib>
//using namespace std;
//int arr[2000000];
//int compare (const void * a, const void * b)
//{
//  return ( *(int*)a - *(int*)b );
//}
//int main()
//{
//    int a;
//    while(cin>>a,a!=0)
//    {
//        for(int i=0;i<a;i++)
//        {
//            cin>>arr[i];
//        }
//        qsort (arr,a,sizeof(int),compare);
//        for(int i=0;i<a;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//    }
//}

#include<iostream>
using namespace std;
int arr[2000000],old[100];
int main()
{
    int a;
    while(cin>>a,a!=0)
    {
        for(int i=0;i<100;i++)
        {
            old[i]=0;
        }
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            old[arr[i]-1]++;
        }
        for(int i=0;i<100;i++)
        {
            for(int j=0;j<old[i];j++)
            {
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
}
