#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    int num=1,a=0,b=0,c=0;
    string str,str1,str2,str3;
    while(getline(cin,str))
    {
        if(str == "Game Over")
        {
            cout<<"�Q���]�`�pĹ�F"<<a<<"������"<<endl;
            cout<<"�����a�`�pĹ�F"<<b<<"������"<<endl;
            cout<<"������P�չp�V�`�pĹ�F"<<c<<"������"<<endl;
            continue;
        }
        if(str =="End")
        {
            if(a>b && a>c)
                cout<<"���W�ȵ{"<<endl;
            else
                cout<<"�~�򰵮a��"<<endl;
            break;
        }
        int iarr[10]={},con=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==',')
            {
                iarr[con]=i;
                con++;
            }
        }
        str1=str1.assign(str,0,iarr[0]);
        str2=str2.assign(str,iarr[0]+1,iarr[1]-iarr[0]-1);
        str3=str3.assign(str,iarr[1]+1,str.length()-iarr[1]-1);
        if(str1=="Paper" && str2=="Scissors" && str3=="Scissors")
        {
            cout<<"�Q���]��F��"<<num<<"��������"<<endl;
            b++;
            c++;
        }
        if(str1=="Paper" && str2=="Stone" && str3=="Stone")
        {
            cout<<"�Q���]Ĺ�F��"<<num<<"��������"<<endl;
            a++;
        }
        if(str1=="Stone" && str2=="Paper" && str3=="Paper")
        {
            cout<<"�Q���]��F��"<<num<<"��������"<<endl;
            b++;
            c++;
        }
        if(str1=="Stone" && str2=="Scissors" && str3=="Scissors")
        {
            cout<<"�Q���]Ĺ�F��"<<num<<"��������"<<endl;
            a++;
        }
        if(str1=="Scissors" && str2=="Stone" && str3=="Stone")
        {
            cout<<"�Q���]��F��"<<num<<"��������"<<endl;
            b++;
            c++;
        }
        if(str1=="Scissors" && str2=="Paper" && str3=="Paper")
        {
            cout<<"�Q���]Ĺ�F��"<<num<<"��������"<<endl;
            a++;
        }
        if(str1=="Scissors" && str2=="Paper" && str3=="Scissors")
        {
            cout<<"�����a��F��"<<num<<"��������"<<endl;
            a++;
            c++;
        }
        if(str1=="Stone" && str2=="Paper" && str3=="Stone")
        {
            cout<<"�����aĹ�F��"<<num<<"��������"<<endl;
            b++;
        }
        if(str1=="Stone" && str2=="Scissors" && str3=="Stone")
        {
            cout<<"�����a��F��"<<num<<"��������"<<endl;
            a++;
            c++;
        }
        if(str1=="Paper" && str2=="Scissors" && str3=="Paper")
        {
            cout<<"�����aĹ�F��"<<num<<"��������"<<endl;
            b++;
        }
        if(str1=="Paper" && str2=="Stone" && str3=="Paper")
        {
            cout<<"�����a��F��"<<num<<"��������"<<endl;
            a++;
            c++;
        }
        if(str1=="Scissors" && str2=="Stone" && str3=="Scissors")
        {
            cout<<"�����aĹ�F��"<<num<<"��������"<<endl;
            b++;
        }
        if(str1=="Scissors" && str2=="Scissors" && str3=="Paper")
        {
            cout<<"������P�չp�V��F��"<<num<<"��������"<<endl;
            a++;
            b++;
        }
        if(str1=="Stone" && str2=="Stone" && str3=="Paper")
        {
            cout<<"������P�չp�VĹ�F��"<<num<<"��������"<<endl;
            c++;
        }
        if(str1=="Stone" && str2=="Stone" && str3=="Scissors")
        {
            cout<<"������P�չp�V��F��"<<num<<"��������"<<endl;
            a++;
            b++;
        }
        if(str1=="Paper" && str2=="Paper" && str3=="Scissors")
        {
            cout<<"������P�չp�VĹ�F��"<<num<<"��������"<<endl;
            c++;
        }
        if(str1=="Paper" && str2=="Paper" && str3=="Stone")
        {
            cout<<"������P�չp�V��F��"<<num<<"��������"<<endl;
            a++;
            b++;
        }
        if(str1=="Scissors" && str2=="Scissors" && str3=="Stone")
        {
            cout<<"������P�չp�VĹ�F��"<<num<<"��������"<<endl;
            c++;
        }
        if(str1 !="Scissors" && str1 !="Stone" && str1 != "Paper")
        {
            cout<<"�Q���]Ĺ�F��"<<num<<"��������"<<endl;
            a++;
        }
        if(str2 !="Scissors" && str2 !="Stone" && str2 != "Paper")
        {
            cout<<"�����aĹ�F��"<<num<<"��������"<<endl;
            b++;
        }
        if(str3 !="Scissors" && str3 !="Stone" && str3 != "Paper")
        {
            cout<<"������P�չp�VĹ�F��"<<num<<"��������"<<endl;
            c++;
        }
        if(str1 =="Scissors" && str2 =="Scissors" && str3 == "Scissors")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        if(str1 =="Stone" && str2 =="Stone" && str3 == "Stone")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        if(str1 =="Paper" && str2 =="Paper" && str3 == "Paper")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        if(str1 =="Scissors" && str2 =="Stone" && str3 == "Paper")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        if(str1 =="Scissors" && str2 =="Paper" && str3 == "Stone")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        if(str1 =="Stone" && str2 =="Scissors" && str3 == "Paper")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        if(str1 =="Stone" && str2 =="Paper" && str3 == "Scissors")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        if(str1 =="Paper" && str2 =="Stone" && str3 == "Scissors")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        if(str1 =="Paper" && str2 =="Scissors" && str3 == "Stone")
        {
            cout<<"��"<<num<<"�������ӭt"<<endl;
        }
        num++;
    }
}
