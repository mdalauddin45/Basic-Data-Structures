#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for(char c: s)
    {
        if(c=='A'){
            if (!st.empty() && st.top() == 'B'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        else if(c=='B'){
            if (!st.empty() && st.top() == 'A'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
    }
    return st.empty();
}
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        if(isValid(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    
    return 0;
}