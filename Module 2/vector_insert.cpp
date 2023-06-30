#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    vector<int> v2={10,21,2,24,25};
    v.insert(v.end(),v2.begin(),v2.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}