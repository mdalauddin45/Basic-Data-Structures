#include <iostream>
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
 void insert_head(Node * &head,Node*&tail,int v)
 {
    Node * newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
 }
 void insert_tail(Node * &head,Node*&tail, int v)
 {
    Node *newNode = new Node(v);
     if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode; 
 }
void Print(Node*head,Node *tail)
{
    Node * temp = head;
    Node * temp1 = tail;
    while (temp!=NULL && temp1!=NULL)
    {
        cout<<temp->val<<" "<<temp1->val;
        temp= temp->next;
        temp1=temp1->next;
    }
    cout<<endl;
}
int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
         int x,v;
        cin >>x>>v;
        if (x == 0) {
            insert_head(head,tail,v);
        } else if (x == 1) {
            insert_tail(head,tail,v);
        }  
         Print(head,tail);
    }
    return 0;
}
