#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
    list<int>l;
    void push(int val)
    {
        l.push_front(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue q;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}