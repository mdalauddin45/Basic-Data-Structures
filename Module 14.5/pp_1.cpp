#include<bits/stdc++.h>
using namespace std;
bool isStack(stack<int>st,stack<int>st1)
{
    bool flag = true;
    if(st.size()!=st1.size())
    {
        flag=false;
        return flag;
    }
    while (!st.empty())
    {
         if(st.top()==st1.top())
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
    stack <int> st;
    stack <int> st1;
    int flag=0;
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
        st1.push(y);
    }
    if(isStack(st,st1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    return 0;
}