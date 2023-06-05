#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n>0) //O log(N)
    {
        int digit=n%10;
        cout<<digit<<endl;
        n/=10;
    }
    for(int i=0;i<n;i=i*2){ //O log(N)
        cout<<i<<endl; 
    }
    return 0;
}