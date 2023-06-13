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
void insert_at_tail(Node*&head,int v)
{
    Node* newNode= new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node * temp = head;
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next=newNode;
}
void Print_single_middle(Node* head)
{
    if(head==NULL)
    {
        cout<<"invalid "<<endl;
        return;
    }
    Node * temp = head;
    Node * temp1 = head;
    while (temp1->next!=NULL)
    {   
        temp1=temp1->next->next;
        temp=temp->next;
    }
    cout<<temp->val;
}
int main()
{
    int v;
    Node* head = NULL;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head,v);
    }
    Print_single_middle(head);
    return 0;
}