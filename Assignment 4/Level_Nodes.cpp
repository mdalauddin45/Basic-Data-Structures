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
void level_nodes(Node* root, int level) {
    if (root == NULL)
    {
        return;
    }
    if (level == 0) cout << root->val << " ";
    level_nodes(root->left, level - 1);
    level_nodes(root->right, level - 1);
}
int NodeLevel(Node*root)
{
    if(root==NULL) return -1;
    int left=NodeLevel(root->left);
    int right=NodeLevel(root->right);
    return max(left,right)+1;
}
int main() {
    Node* root = input_tree();
    int level;
    cin >> level;
    if(NodeLevel(root)<level) cout<<"Invalid"<<endl;
    else{
        level_nodes(root, level);
        cout<<endl;
    }
    return 0;
}