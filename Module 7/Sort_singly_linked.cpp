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
void insert(Node*&head,int v)
{
    Node * newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node * temp = head;
    while (temp->next!=NULL)
    {
        temp= temp->next; // i++;
    }
    temp->next=newNode;
}
void print_Link_List(Node*head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp= temp->next;
    }
}
int main()
{
     Node * head = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert(head,v);
    }
    // cout<<head->val<<endl;
    // print_Link_List(head);

    for(Node * i = head;i->next!=NULL;i=i->next)
    {
        for(Node * j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }

    }
  print_Link_List(head);
    return 0;
}