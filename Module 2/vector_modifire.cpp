#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x={10,20,30};
    x.pop_back();
    x.pop_back();
     for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }

    // vector<int> v={1,2,3};
    // v=x; //O(1) x and v er size same holy ...same na hly O(N);
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}