#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2;
    int aw=0,bw=0;
    while(cin>>str1>>str2)
    {
        if(str1 =="Game" && str2== "Over")
            break;
        if(str1 =="Scissors" && str2== "Paper")
        {
            cout<<"�����"<<endl;
            aw++;
        }
        else if(str1 =="Paper" && str2== "Stone")
        {
            cout<<"�����"<<endl;
            aw++;
        }
        else if(str1 =="Stone" && str2== "Scissors")
        {
            aw++;
            cout<<"�����"<<endl;
        }
        else
        {
             bw++;
            cout<<"�F�����"<<endl;
        }
    }
    if(bw>aw)
        cout<<"�d�G���w���_���o��"<<endl;
    else
        cout<<"�ä����ܸ�"<<endl;
}
