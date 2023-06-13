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
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool duplicate_val(Node * head)
{
    while (head->next!=NULL)
    {
        Node * temp = head->next;
        while (temp!=NULL)
        {
            if(head->val == temp->val)
            {
                return true;
                break;
            }
            temp = temp->next;
        }
        head=head->next;
    }
    return false;
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
    // Print_linked_list(head);
   if(duplicate_val(head))
   cout << "YES"<<endl;
       else
        cout << "NO"<<endl;
    return 0;
}