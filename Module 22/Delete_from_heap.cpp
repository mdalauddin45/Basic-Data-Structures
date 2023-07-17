#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>v,int x)
{
    v.push_back(x);
    int currIndex=v.size()-1;
    int parentIndex=(currIndex-1)/2;
    while (currIndex!=0)
    {
        if(v[parentIndex]<v[currIndex])
        {
        swap(v[parentIndex],v[currIndex]);
        currIndex=parentIndex;
        parentIndex=(currIndex-1)/2;
        }
        else break;
    }
}
void print_vector(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void delete_form_heap(vector<int>&v)
{
    v[0] = v[v.size()-1];
    v.pop_back();
    int curr = 0;
    while (true)
    {
        int leftChild = 2*curr + 1;
        int rightChild = 2*curr + 2;
        int lastIndex = v.size()-1;
        
    }
    
}
int main()
{
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     insert_heap(v,x);
    // }

    vector<int> v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    insert_heap(v,x);
    print_vector(v);
    // cout<<endl;
    // int lastIndex=v.size()-1;
    // swap(v[0],v[lastIndex]);
    // v.pop_back();
    // int index=0;
    // int leftChild=2*index+1;
    // int rightChild=2*index+2;
    // while (leftChild<v.size())
    // {
    //     int maxIndex=index;
    //     if(v[maxIndex]<v[leftChild])
    //     {
    //         maxIndex=leftChild;
    //     }
    //     if(rightChild<v.size() && v[maxIndex]<v[rightChild])
    //     {
    //         maxIndex=rightChild;
    //     }
    //     if(maxIndex==index)
    //     {
    //         break;
    //     }
    //     swap(v[maxIndex],v[index]);
    //     index=maxIndex;
    //     leftChild=2*index+1;
    //     rightChild=2*index+2;
    // }   
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}