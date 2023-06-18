#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10,20,30};
    // list<int>newList ;
    // newList = mylist;

    mylist.push_back(90);
    // mylist.pop_back();
    // mylist.pop_front();
    mylist.push_front(60);
    // mylist.insert(mylist.begin(),100);

    //insert
    mylist.insert(next(mylist.begin(),4),100); 

    //asign 
    // newList.assign(mylist.begin(),mylist.end());
    // for(int val: newList)
    // {
    //     cout<<val << " ";
    // }

    mylist.erase(next(mylist.begin(),2));
    for(int val: mylist)
    {
        cout<<val << " ";
    }

    //found or no found 
    return 0;
}