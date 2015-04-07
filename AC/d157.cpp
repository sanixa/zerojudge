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
            cout<<"十六夜總計贏了"<<a<<"局比賽"<<endl;
            cout<<"紅美鈴總計贏了"<<b<<"局比賽"<<endl;
            cout<<"帕秋莉·諾雷姬總計贏了"<<c<<"局比賽"<<endl;
            continue;
        }
        if(str =="End")
        {
            if(a>b && a>c)
                cout<<"趕上旅程"<<endl;
            else
                cout<<"繼續做家事"<<endl;
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
            cout<<"十六夜輸了第"<<num<<"局的比賽"<<endl;
            b++;
            c++;
        }
        if(str1=="Paper" && str2=="Stone" && str3=="Stone")
        {
            cout<<"十六夜贏了第"<<num<<"局的比賽"<<endl;
            a++;
        }
        if(str1=="Stone" && str2=="Paper" && str3=="Paper")
        {
            cout<<"十六夜輸了第"<<num<<"局的比賽"<<endl;
            b++;
            c++;
        }
        if(str1=="Stone" && str2=="Scissors" && str3=="Scissors")
        {
            cout<<"十六夜贏了第"<<num<<"局的比賽"<<endl;
            a++;
        }
        if(str1=="Scissors" && str2=="Stone" && str3=="Stone")
        {
            cout<<"十六夜輸了第"<<num<<"局的比賽"<<endl;
            b++;
            c++;
        }
        if(str1=="Scissors" && str2=="Paper" && str3=="Paper")
        {
            cout<<"十六夜贏了第"<<num<<"局的比賽"<<endl;
            a++;
        }
        if(str1=="Scissors" && str2=="Paper" && str3=="Scissors")
        {
            cout<<"紅美鈴輸了第"<<num<<"局的比賽"<<endl;
            a++;
            c++;
        }
        if(str1=="Stone" && str2=="Paper" && str3=="Stone")
        {
            cout<<"紅美鈴贏了第"<<num<<"局的比賽"<<endl;
            b++;
        }
        if(str1=="Stone" && str2=="Scissors" && str3=="Stone")
        {
            cout<<"紅美鈴輸了第"<<num<<"局的比賽"<<endl;
            a++;
            c++;
        }
        if(str1=="Paper" && str2=="Scissors" && str3=="Paper")
        {
            cout<<"紅美鈴贏了第"<<num<<"局的比賽"<<endl;
            b++;
        }
        if(str1=="Paper" && str2=="Stone" && str3=="Paper")
        {
            cout<<"紅美鈴輸了第"<<num<<"局的比賽"<<endl;
            a++;
            c++;
        }
        if(str1=="Scissors" && str2=="Stone" && str3=="Scissors")
        {
            cout<<"紅美鈴贏了第"<<num<<"局的比賽"<<endl;
            b++;
        }
        if(str1=="Scissors" && str2=="Scissors" && str3=="Paper")
        {
            cout<<"帕秋莉·諾雷姬輸了第"<<num<<"局的比賽"<<endl;
            a++;
            b++;
        }
        if(str1=="Stone" && str2=="Stone" && str3=="Paper")
        {
            cout<<"帕秋莉·諾雷姬贏了第"<<num<<"局的比賽"<<endl;
            c++;
        }
        if(str1=="Stone" && str2=="Stone" && str3=="Scissors")
        {
            cout<<"帕秋莉·諾雷姬輸了第"<<num<<"局的比賽"<<endl;
            a++;
            b++;
        }
        if(str1=="Paper" && str2=="Paper" && str3=="Scissors")
        {
            cout<<"帕秋莉·諾雷姬贏了第"<<num<<"局的比賽"<<endl;
            c++;
        }
        if(str1=="Paper" && str2=="Paper" && str3=="Stone")
        {
            cout<<"帕秋莉·諾雷姬輸了第"<<num<<"局的比賽"<<endl;
            a++;
            b++;
        }
        if(str1=="Scissors" && str2=="Scissors" && str3=="Stone")
        {
            cout<<"帕秋莉·諾雷姬贏了第"<<num<<"局的比賽"<<endl;
            c++;
        }
        if(str1 !="Scissors" && str1 !="Stone" && str1 != "Paper")
        {
            cout<<"十六夜贏了第"<<num<<"局的比賽"<<endl;
            a++;
        }
        if(str2 !="Scissors" && str2 !="Stone" && str2 != "Paper")
        {
            cout<<"紅美鈴贏了第"<<num<<"局的比賽"<<endl;
            b++;
        }
        if(str3 !="Scissors" && str3 !="Stone" && str3 != "Paper")
        {
            cout<<"帕秋莉·諾雷姬贏了第"<<num<<"局的比賽"<<endl;
            c++;
        }
        if(str1 =="Scissors" && str2 =="Scissors" && str3 == "Scissors")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        if(str1 =="Stone" && str2 =="Stone" && str3 == "Stone")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        if(str1 =="Paper" && str2 =="Paper" && str3 == "Paper")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        if(str1 =="Scissors" && str2 =="Stone" && str3 == "Paper")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        if(str1 =="Scissors" && str2 =="Paper" && str3 == "Stone")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        if(str1 =="Stone" && str2 =="Scissors" && str3 == "Paper")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        if(str1 =="Stone" && str2 =="Paper" && str3 == "Scissors")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        if(str1 =="Paper" && str2 =="Stone" && str3 == "Scissors")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        if(str1 =="Paper" && str2 =="Scissors" && str3 == "Stone")
        {
            cout<<"第"<<num<<"局不分勝負"<<endl;
        }
        num++;
    }
}
