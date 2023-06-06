#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,4,6,2,3,5,8,2,4,3};
    replace(v.begin(),v.end(),2,100);
      for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}