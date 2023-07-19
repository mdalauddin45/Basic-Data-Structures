#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    // st.insert(15);
    // st.insert(50);
    // st.insert(15);
    // st.insert(50);
    // st.insert(45);
    // st.insert(45);

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }


    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}