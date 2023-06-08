#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>t;
    int q[t];
    for(int i=0;i<t;i++)
    {
        cin>>q[i];
    }
    int l=0;
    int r=n-1;
    bool flag=false;
    while (l<=r)
    {
        int mid_index=(l+r)/2;
        if(arr[mid_index]==t)
        {
            flag=true;
            break;
        }
        if(arr[mid_index]<t)
        {
            //dany jabo
            l=mid_index+1;
        }
        if(arr[mid_index]>t)
        {
           //bame jabo
           r=mid_index-1;
        }
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}