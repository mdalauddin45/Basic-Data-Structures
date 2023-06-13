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
    while (temp!=NULL)
    {
        //cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void middle_val(Node*head)
{
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
        return;
    }
    Node * temp = head;
    Node * temp1 = head;
    Node * prev = NULL;

    while (temp1!=NULL)
    {
        temp1=temp1->next->next;
        prev=temp;
        temp=temp->next;
    }
    if(temp1!=NULL )
    {
        cout<<temp->val<<endl;
    }else{
        cout<<prev->val<<" "<<temp->val<<endl;
    }

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
    //  Print_linked_list(head);
    middle_val(head);
    return 0;
}