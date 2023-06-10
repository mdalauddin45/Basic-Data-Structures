#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
    Node* node = new Node(5);
   cout << node->val << endl;
    return 0;
}