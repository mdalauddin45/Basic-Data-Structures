#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,x=0;
    cin>>n;
    vector<int>v(n);
    // vector<int>:: iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=0;j--){
     if(v[i]+1 == v[j]) x++;
        }
    }
    cout<<x;
    return 0;
}