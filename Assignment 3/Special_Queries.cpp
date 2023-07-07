#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>line;
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            string name;
            cin>>name;
            line.push(name);
        }
        else if (x==1)
        {
            if(!line.empty())
            {
                cout<<line.front()<<endl;
                line.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }
    
    return 0;
}