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
void insert_at_pos(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    // cout<<temp->next->val<<endl;
    // cout<<newNode->val<<endl;
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->next->pre=newNode;
    newNode->pre=temp;
}
void insert_head(Node*&head,Node*&tail, int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail = newNode;
        return;
    }
    newNode->next=head;
    head->pre=newNode;
    head=newNode;
}
void print_head(Node* head)
{
    Node* temp = head;
     while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp=temp->next;
    }
}
void insert_tail(Node*&head,Node*&tail,int val)
{
    Node* newNode = new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->pre=tail;
    tail=newNode;
}
void print_tail(Node* tail)
{
    Node* temp = tail;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->pre;
    }
}
int Size(Node* head)
{
    Node* temp = head;
    int i=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    return i;
}
int main()
{
    // Node* head = NULL;
    // Node* tail = NULL;

    // //node create
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* tail=d;
    //node connection
    head->next=a;
    a->pre=head;
    a->next=b;
    b->pre=a;
    b->next=c;
    c->next=d;
    c->pre=b;
    d->pre=c;

    insert_at_pos(head,2,500);
    insert_head(head,tail,100);
    insert_tail(head,tail,200);
    print_head(head);
    cout<<endl;
    print_tail(tail);
    cout<<endl;
    // Size(head);
   
    return 0;
}