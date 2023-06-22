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
void insert_linked_list(Node*&head,Node*&tail,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
   tail->next=newNode;
   tail=newNode;
}
void pritn_linked_list(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void assending_order(Node* head)
{
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node*j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void remover_duplicate(Node*head)
{
     Node* temp=head;
    if(temp==NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        if(temp->next==NULL) break;
        if(temp->val==temp->next->val)
        {
           temp->next=temp->next->next;
        }else if (temp->val!=temp->next->val)
        {
             temp=temp->next;
        }
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_linked_list(head,tail,v);
    }
    assending_order(head);
    remover_duplicate(head);
    pritn_linked_list(head);
    return 0;
}