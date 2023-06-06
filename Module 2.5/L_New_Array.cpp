#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> v1(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}