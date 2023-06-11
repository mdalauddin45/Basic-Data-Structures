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
    Node* head=NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked List "<<endl;
        cout<<"Option 3: Terminate "<<endl;
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
           break;
        }
        
        
    }
    
    return 0;
}