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
Node* input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node *> q;
    if (root) q.push(root);
    
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root;
}
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
Node* insert_BST(Node* root,int x)
{
    if(root==NULL) return new Node(x);
    if(x<root->val) root->left=insert_BST(root->left,x);
    else root->right=insert_BST(root->right,x);
    return root;
}
int main()
{
    Node* root=input_tree();
    insert_BST(root,1);
    print_level_order(root);
    return 0;
}