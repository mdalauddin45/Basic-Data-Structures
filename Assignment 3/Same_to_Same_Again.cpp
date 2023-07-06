#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
class myQueue{
    public:
    list<int> l;
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
bool isSame(myStack st,myQueue q)
{
    bool flag=true;
    if(st.size()!=q.size())
    {
        flag=false;
        return flag;
    }
    while (!st.empty())
    {
        if(st.top()==q.front())
        {
            st.pop();
            q.pop();
        }
        else{
            flag=false;
            break;
        }
    }
    return flag;
}
int main()
{
    myStack st;
    myQueue q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
//    while (!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     cout<<endl;
//     while (!q.empty())
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
    if(isSame(st,q)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}