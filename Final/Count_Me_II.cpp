#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<int> v(x);
        for(int j=0;j<x;j++)
        {
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        int cnt=1;
        int ans=v[0];
        int temp=1;
        for(int j=1;j<x;j++)
        {
            if(v[j]==v[j-1])
            {
                temp++;
            }
            else
            {
                temp=1;
            }
            if(temp>cnt||(temp==cnt&&v[j]>ans))
            {
                cnt=temp;
                ans=v[j];
            }
        }
        cout<<ans<<" "<<cnt<<endl;
    }
    return 0;
}