#include<iostream>
using namespace std;
int main()
{
    int iarr[9][9],a,shiftx[9],shifty[9];
    while(cin>>a){
        iarr[0][0]=a;
        for(int j=0;j<9;j++)
        {
            for(int i=0;i<9;i++)
            {
                if(i!=0 || j!=0)
                cin>>iarr[j][i];
            }
        }

        int total1=0,total2=0,total3=0;
        bool b=true;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                total1+=iarr[i][j];
                total2+=iarr[j][i];
            }
            if(total1!=45 || total2!=45){
                b=false;
                break;
            }
            total1=0;
            total2=0;
        }
        shiftx[0]=0;
        shiftx[1]=0;
        shiftx[2]=0;
        shiftx[3]=3;
        shiftx[4]=3;
        shiftx[5]=3;
        shiftx[6]=6;
        shiftx[7]=6;
        shiftx[8]=6;
        shifty[0]=0;
        shifty[1]=3;
        shifty[2]=6;
        shifty[3]=0;
        shifty[4]=3;
        shifty[5]=6;
        shifty[6]=0;
        shifty[7]=3;
        shifty[8]=6;
        for(int i=0;i<9;i++){
            for(int j=0+shiftx[i];j<3+shiftx[i];j++){
                for(int k=0+shifty[i];k<3+shifty[i];k++){
                    total3+=iarr[j][k];
                }
            }
            if(total3!=45){
                b=false;
                break;
            }
            total3=0;
        }
        if(b)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

}
