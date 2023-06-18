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
void insert_any_position(Node* & head,int pos,int v)
{
    Node* newNode = new Node(v);
    Node * temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next; // 100 er next  30 connect
    temp->next=newNode; // 20-> 100
    newNode->next->pre=newNode; // 100<-30
    newNode->pre=temp; //20<-100
}
void insert_head(Node*&head,Node* &tail,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->pre=newNode;
    head=newNode;
}
void insert_tail(Node*&head,Node*&tail,int v)
{
    Node * newNode = new Node (v);
    if(tail==NULL)
    {
        tail=newNode;
        head=newNode;
        return;
    }
    tail->next=newNode;
    newNode->pre=tail;
    tail=tail->next;
}
int size(Node* head)
{
    int i=0;
    while (head!=NULL)
    {
        head=head->next;
        i++;
    }
    return i;
}

int main()
{
    Node* head= NULL;
    Node* tail=NULL;
    
     int val;
    while (true)
    {
         cin>>val;
         if(val==-1) break;
         insert_tail(head, tail,val);
    }
    

   
    // if(pos==0)
    // {
    //     insert_head(head,tail,val);
    // }
    // else if(pos==size(head)){
    //     insert_tail(head, tail,val);
    // }
    // else if(pos>=size(head))
    // {
    //     cout<<"Invalid"<<endl;
    // }else{
    // insert_any_position(head,pos,val);
    // }

    //printing
    print_normal(head);
    cout<<endl;
    return 0;
}