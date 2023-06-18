#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* pre;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
void print_normal(Node* head)
{
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    
}
void print_reverce(Node* tail)
{
    Node* temp = tail;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->pre;
    }
    
}
int main()
{
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* tail=b;

    //connection
    head->next=a;
    a->pre=head;
    a->next=b;
    b->pre=a;

    //printing
    print_normal(head);
    cout<<endl;
    print_reverce(tail);
    return 0;
}