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
void insert_link_list(Node *&head, int v)
{
    Node * newNode = new Node(v);
    Node * temp = head;
    if(head==NULL)
    {
      head=newNode;
       return;
    }

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode; 
}
void print_list(Node * head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int size(Node * head)
{
    Node * temp = head;
    int i=0;
    while (temp!=NULL)
    {
        i++;
        temp=temp->next;
    }
    return i;
}
void sort(Node * head)
{
    
}
int main()
{
    Node * head = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_link_list(head,v);
    }
    print_list(head);
    return 0;
}