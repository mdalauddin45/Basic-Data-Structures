#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    sort(v.begin(),v.end());
    cout<<v[k-1];
    return 0;
}