#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int currIndex=v.size()-1;
    // cout<<currIndex<<endl;
    int parentIndex=(currIndex-1)/2;    
    // cout<<parentIndex<<endl;
    // cout<<v[parentIndex]<<" "<<v[currIndex]<<endl; 
    while (currIndex!=0)
    {
        if(v[parentIndex]>v[currIndex])
        {
        swap(v[parentIndex],v[currIndex]);
        currIndex=parentIndex;
        parentIndex=(currIndex-1)/2;
        }
        else break;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}