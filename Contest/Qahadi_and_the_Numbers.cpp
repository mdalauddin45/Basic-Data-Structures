#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector <int> arr(x);
        for(int j=0;j<x;j++) cin>>arr[j];
        sort(arr.begin(),arr.end());
        int result = 0;
        for (int i=1;i<x;i++)  if (arr[i] == arr[i - 1]) result++;
        cout<<result<<endl;
    }
    return 0;
}