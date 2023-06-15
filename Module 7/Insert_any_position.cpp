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
void Print_link_list(Node * head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_pos(Node *&head,int pos, int v )
{
    Node * newNode = new Node(v);
    Node * temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    // temp = pos-1 gory achy   // cout<<temp->val;
    newNode->next=temp->next;
    temp->next=newNode;
}
int size(Node * head)
{
    Node * temp = head;
    int i=0;
    while (temp!=NULL)
    {
        i++;
        temp= temp->next;
    }
    // cout<<i<<" ";
    return i;
    
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

     int pos,val;
     cin>>pos>>val;
     if(pos>size(head))
     {
        cout<<"Invalid Index"<<endl;
     }else{
        insert_pos(head,pos,val);
        Print_link_list(head);
     }
    return 0;
}