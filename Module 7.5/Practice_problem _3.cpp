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
//link list create in tail
void insert_link_list(Node * &head, int v)
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
//normaly print 
void Print_list(Node * head)
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
    int i=0;
    while (head!=NULL)
    {
       head= head->next;
       i++;
    }
    return i;
    
}
//midle value print
void middle_print(Node * head)
{
    Node * temp = head;
    if(size(head)%2!=0)
    {
    for(int i=0;i<size(head)/2;i++)
    {
        temp=temp->next;
    }
    cout<<temp->val;
    }else{
        for(int i=0;i<size(head)/2-1;i++)
    {
        temp=temp->next;
    }
    cout<<temp->val<<" "<<temp->next->val; 
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
        insert_link_list(head,v);
    }
    // Print_list(head);
    // cout<<size(head);
    middle_print(head);
    return 0;
}