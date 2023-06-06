#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    vector<int>v(x);
    vector<int>v1(y);
    vector<int>:: iterator it;
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<y;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<y;i++)
    {
        it = find(v.begin(),v.end(),v1[i]);
        if(it==v.end()) cout<<"not found"<<endl;
        else cout<<"found"<<endl;
    }
    return 0;
}