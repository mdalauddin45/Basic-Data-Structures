#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sn=0;
    for (int i=0;i<n;i++) {
    for (int j=0;j<n-1;j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            sn++;
        }
    }
    if (sn == 0) {
        break;
    }
    }
    cout<<"Array is sorted in "<<sn<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}