#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList;
    int v;
    while (cin>>v && v!=-1)
    {
        myList.push_back(v);
    }
    myList.sort();
    myList.unique();
    for( int x: myList)
    {
        cout<<x<<" ";
    }
    
    return 0;
}