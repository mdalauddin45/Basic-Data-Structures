#include<bits/stdc++.h>
using namespace std;
int find_the_thief(int n,int arr[])
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        result^=arr[i];
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int j=0;j<x;j++) cin>>arr[j];
        int result=find_the_thief(x,arr);
        cout<<result<<endl;   
    }
    return 0;
}