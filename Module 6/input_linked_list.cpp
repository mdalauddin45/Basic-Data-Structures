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
void insert_at_tail(Node *&head,int v)
{
    Node * newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node * temp=head;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=newNode;
}
void print_linked_list(Node *head)
{
    cout<<"Your Linked List ";
    Node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int v;
    Node * head = NULL;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head,v);
    }
    print_linked_list(head);
    return 0;
}