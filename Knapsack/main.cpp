
#include <iostream>

using namespace std;

int a[10],n, W;
int v[10],w[10];
int result[10];
void init ()
{
    cin >> n; //nhap n;
}

void output()
{
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;
}
void input(){
     for(int i=0;i<n;i++){
         cout <<"v["<<i<<"]=<<";
         cin>>v[i];
         cout <<"w["<<i<<"]=<<";
          cout << endl;

     }

}
int SumV(int a[10]){
    int s=0;
     for(int i=0;i<n;i++)
       if(a[i]==1)
         s+=v[i];
    return s;
}
int SumW(int a[10]){
    int s=0;
     for(int i=0;i<n;i++)
        if(a[i]==1)
         s+=w[i];
    return s;
}
void CopyArray(int a[],int b[]){
    for(int i=0;i<n;i++)
        a[i]=b[i];

}
void Try(int i)
{
    for(int v=0;v<=1;v++)
    {
        a[i]=v;
        if(i==n-1){

        }

        else
            Try(i+1); //
    }
}

int main()
{
    init();  //
    Try(0);
}
