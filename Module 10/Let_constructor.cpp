#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>mylist;
    // list<int>mylist2= {1,2,3,4,5,6,7};
    int a[5]={10,20,304,05,60};
    vector<int> v={30 ,46,03,50,2};
    // list<int>mylist(10,5);
    // list<int>mylist(mylist2);
    // list<int>mylist(a,a+5);
    list<int>mylist(v.begin(),v.end());
    // for(auto it = mylist.begin();it!=mylist.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    for(int val:mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}