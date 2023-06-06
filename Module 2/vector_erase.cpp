#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    // v.erase(v.begin()+3); //single value delete
    v.erase(v.begin()+1,v.begin()+4); //Multiple value delete
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}