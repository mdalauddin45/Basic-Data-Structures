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
        if(temp==NULL)
        {
            cout<<endl<<"Invalid index"<<endl<<endl;
            return;
        }
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
    cout<<endl<<"Inserted at head"<<endl<<endl;
}
void delete_form_position(Node *head, int pos)
{
    Node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            cout<<endl<<"Invalid index"<<endl<<endl;
            return;
        }
    }
    if(temp->next==NULL)
    {
        cout<<endl<<"Invalid index"<<endl<<endl;
        return;
    }
    Node * deleteNode = temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Position "<<pos<<endl<<endl;
}
void  delete_head(Node * &head)
{
    if(head==NULL)
    {
        cout<<endl<<"Head is not available"<<endl;
    }
    Node * deleteNode = head;
    head=head->next;
    delete deleteNode;
    cout<<endl<<"Deleted Head "<<endl;
}
int main()
{
    Node* head=NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl; //done
        cout<<"Option 2: Print Linked List "<<endl; //done
        cout<<"Option 3: Inser at any position "<<endl;
        cout<<"Option 4: Inser at Head "<<endl; //done
        cout<<"Option 5: Delete any position"<<endl;
        cout<<"Option 6: Delete head"<<endl;
        cout<<"Option 7: Terminate "<<endl;
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
           if(pos==0)
           {
            delete_head(head);
           }else{
            delete_form_position(head,pos);
           }
        }   
        else if (op==6)
        {
           delete_head(head);
        }   
        else if (op==7)
        {
           break;
        }   
    }
    
    return 0;
}