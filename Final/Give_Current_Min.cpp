#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++) cin>>v[i];
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++) pq.push(v[i]);
    int x;
    cin>>x;
    while (x--)
    {
        int cmd;
        cin>>cmd;
        if(cmd==0)
        {
            int y;
            cin>>y;
            pq.push(y);
            cout<<pq.top() << endl;
        }else if(cmd==1)
        {
            if (pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }else if(cmd == 2)
        {
            if (pq.empty()) cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty()) cout << "Empty" << endl;
                else cout << pq.top() << endl;
            }
        }
    }

    return 0;
}
