#include<bits/stdc++.h>
using namespace std;
bool isSame(stack<int>st,queue<int>q)
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
    stack<int>st;
    queue<int>q;
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