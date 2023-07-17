#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v,int x)
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
        int maxIndex = curr;
        if(leftChild<=lastIndex && rightChild<=lastIndex)
        {
            //dutail acy 
            if(v[leftChild]>=v[rightChild] && v[leftChild]>v[curr])
            {
                swap(v[leftChild],v[curr]);
                curr = leftChild;
            }
            else if(v[rightChild]>=v[leftChild] && v[rightChild]>v[curr])
            {
                swap(v[rightChild],v[curr]);
                curr = rightChild;
            }
            else break;
        }
        else if(leftChild<=lastIndex)
        {
            //left acy
            if(v[leftChild]>v[curr])
            {
                swap(v[leftChild],v[curr]);
                curr = leftChild;
            }
            else break;
         
        }
        else if(rightChild<=lastIndex)
        {
            //right acy
            if(v[rightChild]>v[curr])
            {
                swap(v[rightChild],v[curr]);
                curr = rightChild;
            }
            else break;
        }
        else break;
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
    delete_form_heap(v);
    print_vector(v);
    return 0;
}