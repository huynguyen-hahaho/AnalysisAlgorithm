#include <iostream>

using namespace std;

int main()

{
    int A[100];
    A[0]=1;

    int n=10;
    for(int i=1;i<n;i++)
    {
        A[i]=A[i-1]+i;
    }
    cout<<A[n-1];

    return 0;
}
