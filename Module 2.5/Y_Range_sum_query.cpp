#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    vector<int> v(x);
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    int a[y][2];
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    int s=0;
    for(int i=0;i<x;i++)
    {
        s+=v[i];
        cout<<v[i]<<" ";
    }
    cout<<s;
    cout<<endl;
    int ss;
     for(int i=0;i<y;i++)
    {
        ss=0;
        for(int j=0;j<2;j++)
        {
            ss+=a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<ss;
    return 0;
}