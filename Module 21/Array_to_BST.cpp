#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void print_level_order(Node* root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}
Node* array_to_BST(int arr[], int n, int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;
    Node* root = new Node(arr[mid]);

    root->left = array_to_BST(arr, n, l, mid - 1);
    root->right = array_to_BST(arr, n, mid + 1, r);

    return root;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Node* root=array_to_BST(arr,n,0,n-1);
    print_level_order(root);
    return 0;
}