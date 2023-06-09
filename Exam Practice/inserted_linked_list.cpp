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
//insert at tail
void insert_at_tail(Node*&head,int v)
{
    Node * newNode= new Node(v);
    //cout<<"new node value "<<newNode->val<<endl;
    //cout<<"new node next "<<newNode->next<<endl;
    // when head is null 
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    //tail
    Node * temp=head;
    // cout<<"Head is "<<head<<endl;
    // cout<<"Temp is "<<temp<<endl;
    while (temp->next!=NULL)
    {
      temp= temp->next;
    }
    // temp ekhon last node a
    temp->next=newNode;
    cout<<endl<<"Insert at Tail"<<endl;
}
void print_linked_list(Node* head)
{
    cout<<"Your Linked List: ";
    Node * temp = head;
    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp=temp->next;
    }
    cout<<endl;
}
void insert_at_position(Node *&head, int pos,int v)
{
    Node* newNode=new Node(v);
    if(pos==0){
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Insert at head "<<endl;
    }
    else 
    {
    Node * temp = head;
    for(int i=1;i<pos-1;i++)
    {
        temp= temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<endl<<"Inset at position "<<pos<<endl;
    }
    
}
// void insert_at_head(Node*&head,int v)
// {
//     Node * newNode=new Node(v);
//     newNode->next=head;
//     head=newNode;
//     cout<<endl<<"Insert at head "<<endl;
// }
int main()
{
    Node* head = NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Insert at any position"<<endl;
        cout<<"Option 3: Print Linked List"<<endl;
        cout<<"Option 4: Terminated"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter your value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if (op==2)
        {
            int pos,v;
            cout<<"Enter position ";
            cin>>pos;
            cout<<"Enter value ";
            cin>>v;
            insert_at_position(head,pos,v);
        }
        else if (op==3)
        {
            print_linked_list(head);
        }
        else if (op==4)
        {
            break;
        }
        
    }
    
    return 0;
}