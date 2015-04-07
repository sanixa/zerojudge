#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int p[1000000]={2,3,5,7};
int p_cnt=4;
bool is_prime(int i)
{
    if(i<2) return false;
    for(int j=0;j<p_cnt && p[j]*p[j]<=i;j++)
        if(i%p[j]==0)
            return false;
    return true;
}

void build_prime(int p_max)
{
    p_max=sqrt(p_max);
    for(int i=11,j=2;p[p_cnt-1]<=p_max;i+=j,j=6-j) //6n+1,6n+5
        if(is_prime(i))
            p[p_cnt++]=i;
}

int main(){
    build_prime(10000);
    int a,arr[100]={},k,num,counter;
    while(cin>>a,a!=0){
        for(int i=0;i<100;i++)
            arr[i]=0;
        for(int i=1;i<=a;i++){
            k=0;
            num=i;
            for(int j=0;j<p_cnt;j++){
                while(num%p[j]==0){
                    arr[k]++;
                    num/=p[j];
                }
                k++;
            }
        }
        counter=0;
        cout<<a<<"! = ";
        for(int i=0;i<100;i++){
            if(arr[i]!=0){
                if(counter==0)
                    printf("%2d",arr[i]);
                else
                    printf("%3d",arr[i]);
                counter++;
            }
            if(counter==15)
                cout<<endl;
        }
        if(counter%15!=0)
            cout<<endl;
    }
}
