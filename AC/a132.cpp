#include<iostream>
using namespace std;

int main(){
    int a,arr[100],k,b,c;
    while(cin>>a,a!=0){
        k=0;
        b=a;
        c=0;
        while(b!=0){
            arr[k]=b%2;
            b/=2;
            k++;
        }
        for(int i=0;i<k;i++){
            if(arr[i]==1)
                c++;
        }
        cout<<"The parity of ";
        for(int i=0;i<k;i++)
            cout<<arr[k-i-1];
        cout<<" is "<<c<<" (mod 2)."<<endl;
    }
}
