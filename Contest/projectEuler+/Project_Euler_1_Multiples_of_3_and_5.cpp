#include<bits/stdc++.h>
using namespace std;
int result(int num) {
    int multiple = 0;
    for (int i = 0; i < num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            multiple += i;
        }
    }
    return multiple;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    cout << result(arr[i]) << endl;
    }
    return 0;
}
