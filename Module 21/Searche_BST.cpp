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
bool bst_search(Node* root,int key)
{
    if(root = NULL) return false;
    if(root->val==key) return true;
    if(root->val>key) return bst_search(root->left,key);
    else return bst_search(root->right,key);
}
int main()
{
    Node* root=input_tree(); 
    // print_level_order(root);
    if(root,0) cout<<"true";
    else cout<<"false";
    // int key;
    // cin>>key;
    // cout<<bst_search(root,key);
    return 0;
}