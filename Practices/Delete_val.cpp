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
void delete_head(Node*&head)
{
    Node* deleteNode = head;
    head=head->next;
    delete deleteNode;
    head->pre=NULL;
}
void delete_tail(Node*& tail)
{
    Node* deleteNode = tail;
    tail=tail->pre;
    delete deleteNode;
    tail->next=NULL;
}
void delete_at_pos(Node*head,int pos)
{
    Node* temp = head;
    for(int i=0;i<pos;i++)
    {
        temp=temp->next;
    }
    Node* deleteNode = temp;
    temp->pre->next=temp->next;
    temp->next->pre=temp->pre;
    delete deleteNode;
    // cout<<temp->val<<endl;
}
void delete_val(Node*head,int v)
{
    if(head==NULL)
    {
        cout<<"this list is empty "<<endl;
        return;
    }
    Node* temp = head;
    Node* deleteNode = temp;
    while (temp!=NULL)
    {
       if(temp->val==v)
       {
        if(temp->pre!=NULL)
        {
            temp->pre->next=temp->next;
        }else head=temp->next;
        if(temp->next!=NULL)
        {
            temp->next->pre=temp->pre;
            delete deleteNode;
            return;
        }
       }
       temp=temp->next;
    }
    cout<<"Node with value no found."<<endl; 
}
//one of best way of delete any value form the linked list 
void delete_value(Node*&head, int v)
{
    if (head == NULL)
    {
        cout << "This list is empty." << endl;
        return;
    }

    Node* temp = head;

    if (temp->val == v)
    {
        head = temp->next;
        if (temp->next != NULL)
        {
            temp->next->pre = NULL;
        }
        delete temp;
        cout << "Node with value " << v << " deleted." << endl;
        return;
    }
    delete_value(temp->next, v);
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

    print_head(head);
    cout<<endl;
    // delete_at_pos(head,2);
    delete_value(head,50);
    print_head(head);
    cout<<endl;
    return 0;
}