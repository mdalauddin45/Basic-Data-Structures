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
int Coutn_leaf_node(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    return Coutn_leaf_node(root->left)+Coutn_leaf_node(root->right);
}
int left_sum(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return root->val;
    return left_sum(root->left)+left_sum(root->right);
}
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int main()
{
    // Node* root=new Node(10);
    // Node* a=new Node(20);
    // Node* b=new Node(30);
    // Node* c=new Node(40);
    // Node* d=new Node(50);
    // Node* e=new Node(60);
    // Node* f=new Node(70);
    // Node* g=new Node(80);
    // Node* h=new Node(90);
    // Node* i=new Node(100);

    // //connection
    // root->left=a;
    // root->right=b;
    // a->left=c;
    // a->right=h;
    // b->right=d;
    // c->right=e;
    // d->left=f;
    // d->right=g;
    // h->right=i;

    // cout<<count_node(root);

    Node* root=input_tree();
    // cout<<Coutn_leaf_node(root);
    cout<<left_sum(root);
    return 0;
}