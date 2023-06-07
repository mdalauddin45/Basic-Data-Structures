#include<bits/stdc++.h>
using namespace std;
bool balanced(string s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='{'|| ch=='[') st.push(ch);
        else
        {
            if(st.empty()) return false;
            if (ch == ')' && st.top() == '(') st.pop();
            else if (ch == '}' && st.top() == '{') st.pop();
            else if (ch == ']' && st.top() == '[') st.pop();
            else return false;
        }
    }
    if(st.empty()) return true;
    else return false;
}
int main()
{
    string s;
    cin>>s;
    int x=balanced(s);
    if(x==1)  cout<<"balanced expressions";
    else cout<<"not balanced";
    return 0;
}