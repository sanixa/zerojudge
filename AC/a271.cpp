#include<iostream>
#include<sstream>//×Ö´®´®Á÷ÓÃ˜Ëî^™n
using namespace std;
int main(){
    long long a,arr[6],total,b,poison;
    bool bo=true;
    cin>>a;
    stringstream stream;
    string str;
    for(int i=0;i<a;i++){
        for(int j=0;j<6;j++)
            cin>>arr[j];
        cin.ignore(100,'\n');
        arr[2]=-arr[2];
        arr[3]=-arr[3];
        total=arr[5];
        getline(cin,str);
        stream.clear();
        stream.str("");
        stream<<str;
        poison=0;
        bo=true;
        while(stream>>b){
            total-=poison*arr[4];
            if(total<=0){
                bo=false;
                break;
            }
            if(b==4)
                poison++;
            if(b==0)
                continue;
            total+=arr[b-1];
            if(total<=0){
                bo=false;
                break;
            }
        }
        if(bo)
            cout<<total<<"g"<<endl;
        else
            cout<<"bye~Rabbit"<<endl;
    }
}
