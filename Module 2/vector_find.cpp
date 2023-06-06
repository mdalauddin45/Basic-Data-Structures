#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,4,6,2,3,5,8,2,4,3};
    vector<int>:: iterator it;
    it = find(v.begin(),v.end(),5);
    if(it == v.end()) cout<<"Not Found";
    else cout<<"Found";
    // cout<<*it;
    return 0;
}