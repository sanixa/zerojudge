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
            cout<<"µµÀò³Ó"<<endl;
            aw++;
        }
        else if(str1 =="Paper" && str2== "Stone")
        {
            cout<<"µµÀò³Ó"<<endl;
            aw++;
        }
        else if(str1 =="Stone" && str2== "Scissors")
        {
            aw++;
            cout<<"µµÀò³Ó"<<endl;
        }
        else
        {
             bw++;
            cout<<"ÆF¹ÚÀò³Ó"<<endl;
        }
    }
    if(bw>aw)
        cout<<"´dºGªºÄw±¹°_­»ªo¿ú"<<endl;
    else
        cout<<"¿Ã¤õªºÂÜ¸ñ"<<endl;
}
