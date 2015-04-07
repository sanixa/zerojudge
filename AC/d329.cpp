#include<iostream>
using namespace std;
int rev(int a){
    int b=0;
    while(a!=0){
        b*=10;
        b+=a%10;
        a/=10;
    }
    return b;
}
//int main(){
//    int a,b,c;
//    cin>>a;
//    while(a--){
//        cin>>b;
//        cin>>c;
//        cout<<rev(b)<<" "<<rev(c)<<endl;
//    }
//}
int main(){
    int a,b,c;
    cin>>a;
    while(a--){
        cin>>b;
        cin>>c;
        cout<<rev(rev(b)+rev(c))<<endl;
    }
}
