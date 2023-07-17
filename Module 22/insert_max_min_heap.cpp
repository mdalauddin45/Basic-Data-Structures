#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int curr=v.size()-1;
    int parent=(curr-1)/2;
    // cout<<parent;
    while (curr!=0)
    {
        if(v[parent]<v[curr]){
            swap(v[parent],v[curr]);
            curr=parent;
            parent=(curr-1)/2;
        }else break;
    }
    for(int val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    while (curr!=0)
    {
        if(v[parent]>v[curr]){
            swap(v[parent],v[curr]);
            curr=parent;
            parent=(curr-1)/2;
        }else break;
    }
    for(int val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}