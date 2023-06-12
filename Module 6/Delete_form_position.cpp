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
    //tial
    Node * temp=head;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }
    //temp ekhon last node a
    temp->next=newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;
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
void insert_at_position(Node *&head ,int pos,int v)
{
    Node* newNode = new Node(v);
    Node* temp=head; 
    for(int i=1;i<=pos-1;i++)
    {
        temp= temp->next;
    }
    // cout<<(temp->next->val);
    // cout<<(newNode->next); // value Null or 0
    newNode->next=temp->next;
    //cout<<(newNode->next->val);
    temp->next=newNode;
    cout<<endl<<endl<<"Inserted at position "<<pos<<endl;
}
void insert_at_head(Node * &head, int v)
{
    Node * newNode=new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted at head"<<endl;
}
void delete_form_position(Node *head, int pos)
{
    Node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    Node * deleteNode = temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Position "<<pos<<endl;
}
int main()
{
    Node* head=NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked List "<<endl;
        cout<<"Option 3: Inser at any position "<<endl;
        cout<<"Option 4: Inser at Head "<<endl;
        cout<<"Option 5: Delete any position"<<endl;
        cout<<"Option 5: Delete any position"<<endl;
        cout<<"Option 6: Terminate "<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
        cout<<"Enter Value : ";
        int v;
        cin>>v;
        insert_at_tail(head,v);
        }
        else if (op==2)
        {
            print_linked_list(head);
        }
        else if (op==3)
        {
            int pos,v;
            cout<<"Enter position: ";
            cin>>pos;
            cout<<"Enter Value ";
            cin>>v;
            if(pos==0)
            {
                insert_at_head(head,v);
            }else 
            {
                insert_at_position(head,pos,v);
            }
            
        }
        else if (op==4)
        {
            int v;
            cout<<"Enter Value ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if (op==5)
        {
           int pos;
           cout<<"Enter position ";
           cin>>pos;
            delete_form_position(head,pos);
        }   
        else if (op==6)
        {
           break;
        }   
        
    }
    
    return 0;
}