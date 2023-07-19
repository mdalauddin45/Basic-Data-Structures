#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    st.insert(15);
    st.insert(50);
    st.insert(15);
    st.insert(50);
    st.insert(45);
    st.insert(45);


    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}