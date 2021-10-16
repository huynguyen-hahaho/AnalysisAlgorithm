#include<iostream>
#define MAX 20
using namespace std;

int n;
int k;
int Bool[MAX] = { 0 };
int A[MAX];//

void xuat() {
    for (int i = 1; i <= k; i++)
        cout << A[i] << " ";
    cout << endl;
}

void Try(int j) {
    for (int i = 1; i <= n; i++) {

        if (!Bool[i]) {
            A[j] = i;
            Bool[i] = 1;
            if (j == k)
                xuat();
            else
                Try(j + 1);
            Bool[i] = 0;
        }
    }
}

int main() {
    cout << "Mhap n: ";

    cin >> n;
    cout << "Mhap k: ";
    cin>>k;
    Try(1);
}
