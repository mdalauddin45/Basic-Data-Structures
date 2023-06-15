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
void print_Link_List(Node*head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp= temp->next;
    }
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    // cout<<head->val<<endl;
    print_Link_List(head);
    return 0;
}