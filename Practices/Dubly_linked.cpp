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
void print_head(Node* head)
{
    cout<<endl<<"Your Linked list head to tail: ";
    Node* temp = head;
     while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp=temp->next;
    }
    cout<<endl<<endl;
}
void print_tail(Node* tail)
{
    Node* temp = tail;
    cout<<endl<<"Your Linked list tail to head : ";
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->pre;
    }
     cout<<endl<<endl;
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
    Node* head= NULL;
    Node* tail=NULL;
    
    while (true)
    {
        cout<<"Option 1: Insert at Tail "<<endl;
        cout<<"Option 2: Inser at Head "<<endl;
        cout<<"Option 3: Inser at any position "<<endl;
        cout<<"Option 4: Delete at Head "<<endl;
        cout<<"Option 5: Delete at tail "<<endl;
        cout<<"Option 6: Delete at any position "<<endl;
        cout<<"Option 7: Print Linked List head to tail "<<endl;
        cout<<"Option 8: Print Linked List tail to head "<<endl;
        cout<<"Option 9: Size of linked list "<<endl;
        cout<<"Option 10: Terminate "<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter Value : ";
            int v;
            cin>>v;
            insert_tail(head,tail,v);
        }
        else if(op==2)
        {
            cout<<"Enter Value : ";
            int v;
            cin>>v;
            insert_head(head,tail,v);
        }
        else if(op==3)
        {
            cout<<"Enter Value : "<<endl;
            int v;
            cin>>v;
            cout<<"Enter position : "<<endl;
            int pos;
            cin>>pos;
            insert_at_pos(head,pos,v);
            cout<<"After insert at position "<<pos<<", "<<v;
            print_head(head);
        }
        else if(op==4)
        {
            delete_head(head);
        }
        else if(op==5)
        {
            delete_tail(tail);
        }
        else if(op==6)
        {
            cout<<"Enter your posistion "<<endl;
            int pos;
            cin>>pos;
            delete_at_pos(head,pos);
            cout<<"After delete at position "<<pos<<" value ";
            print_head(head);
        }
        else if(op==7)
        {
            print_head(head);
        }
        else if(op==8)
        {
            print_tail(tail);
        }
        else if(op==9)
        {
            cout<<"Your liked list size is "<<Size(head)<<endl<<endl;
        }
        else if (op==10)
        {
            break;
        }
        else{
            cout<<"Enter the valid option "<<endl<<endl;
        }
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
    print_head(head);
    cout<<endl;
    return 0;
}