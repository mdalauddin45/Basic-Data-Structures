#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
    list<int>l;
    void push(int val)
    {
        l.push_back(val);
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
bool isSame(stack<int>st, myQueue st1)
{
    bool flag = true;
    if(st.size()!=st1.size())
    {
        flag=false;
        return flag;
    }
    while (!st.empty())
    {
         if(st.top()==st1.front())
        {
            st.pop();
            st1.pop();
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
    
}
int main()
{
    stack<int>st;
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    // while (!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;
    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    if(isSame(st,q)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}