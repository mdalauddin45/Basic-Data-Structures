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
        int arr[x];
        for(int j=0;j<x;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<x;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}