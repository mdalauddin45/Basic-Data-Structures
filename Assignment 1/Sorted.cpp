#include<bits/stdc++.h>
using namespace std;
int IsSorted(int arr[],int n)
{
     if(n==0|| n==1)
       {
         return 1;
        }
    for(int i=1;i<n;i++)
    {
       
     if(arr[i-1]>arr[i]) {
         return false;
        }
     else {
         return true;
     }; 
    }
    return true;
}
int main()
{
    long long n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        int arr[x];
        for(int j=0;j<x;j++)
        {
            cin>>arr[j];
        }
       
        if(IsSorted(arr,x)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}