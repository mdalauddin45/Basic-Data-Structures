#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(20);
    // cout<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.capacity()<<endl;
    // v.push_back(60);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(14);
    // cout<<v.capacity()<<endl;
    // v.push_back(102);
    // cout<<v.capacity()<<endl;

        v.push_back(12);
        v.push_back(145);
        v.push_back(124);
        v.push_back(113);
        v.push_back(1224);
        v.push_back(14);
        // v.clear(); // v.clear do not delete the memory only clear the value
        v.resize(8,100);
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        // cout<<v[3]<<endl; 
    return 0;
}