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
void insert(Node*&head,int v)
{
    Node * newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node * temp = head;
    while (temp->next!=NULL)
    {
        temp= temp->next; // i++;
    }
    temp->next=newNode;
}
int main()
{
    
    return 0;
}