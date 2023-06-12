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
void insert_at_tial(Node*&head,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL)
    {
         temp= temp->next;
    }
    temp->next=newNode;
}
void Print_linked_list(Node * head)
{
    Node * temp=head;
    int i=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    cout<<i;
    cout<<endl;
}
int main()
{
    int v;
    Node * head =NULL;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tial(head,v);
    }
    Print_linked_list(head);
    return 0;
}