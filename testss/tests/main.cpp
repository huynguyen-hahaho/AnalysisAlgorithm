#include <iostream>

using namespace std;

int main()
{
    int n;
   // cout<<"Nhap so:";
   // cin>>n;
    /*switch(n){
        case 1: cout<<"Chu nhat";

                break;
        case 2: cout<<"Thu hai";
                break;
        case 3: cout<<"Thu ba";
                break;
        case 4: cout<<"Thu tu";
                break;
        case 5: cout<<"Thu nam";
                break;
        case 6: cout<<"Thu sau";
                break;
        case 7: cout<<"Thu bay";
                break;
        default: cout<<"Nhap sai";

    }*/
    //S=1+2+3+...+n
    int i=1;
    int s=0;
   /* while(i<=n){
        s=s+i;
        i++;
    }*/
    /*do{
        s=s+i;
        i++;
    }while(i<=n);*/
    /*for(i=1;i<=n;i++)
        s=s+i;
    cout<<"Tong S:"<<s;*/
    for(int i=0;i<=20;i++)
    {
        if(i==10) goto label1;
        cout<<i<<"\t";
    }
    cout<<"xyz";
    label1: cout<<"label";
    return 0;
}
