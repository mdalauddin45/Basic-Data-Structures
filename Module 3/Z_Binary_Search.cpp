#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n); //NlogN
    while (q--)
    {
        int x;
        cin>>x;
        bool flag=false;
        int l=0,r=n-1;
        //binary search
        while (l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]==x)
            {
                flag=true;
                break;
            }
            if(arr[mid]<x)
            {
                 l=mid+1;
            }
            else{
                 r=mid-1;
            }
        }
        if(flag==true) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}