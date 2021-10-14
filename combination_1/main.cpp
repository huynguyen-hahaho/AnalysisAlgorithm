
#include <iostream>

using namespace std;

int a[10],n,k;


void init ()
{
    cin >> n; //nhap n;
    cin >> k; //nhap k;
}

void output()
{
    for(int i=1;i<=k;i++)
        cout << a[i];
    cout << endl;
}

void Try(int i)
{
    for(int v=a[i-1]+1;v<=n-k+i;v++)
    {
       a[i]=v;
        if(i==k)   //
            output();
        else
            Try(i+1); //
    }
}

int main()
{
    init();  //
    a[0]=0;
    Try(1);
}
