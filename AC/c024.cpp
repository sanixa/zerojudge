#include<iostream>
using namespace std;
int main()
{
    long long a;
    while(cin>>a)
    {
         if(a<0)
            break;
         unsigned long long cal=0;
         if(a%2==0)
            cal=a/2*(a+1);
         else
            cal=(a+1)/2*a;
         cout<<cal+1<<endl;
    }
    return 0;
}
