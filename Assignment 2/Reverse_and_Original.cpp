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
 void insert_link_list(Node * &head,Node*&tail, int v) 
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
void Print(Node*head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
void reverse_print(Node * head)
{
    if(head==NULL) return;
    reverse_print(head->next);
    cout<<head->val<<" ";
}
void a_print(Node * head)
{
    if(head==NULL) return;
    cout<<head->val<<" ";
    a_print(head->next);
}
 int main() 
 { 
        Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_link_list(head, tail, val);
    }
    reverse_print(head);
    cout<<endl;
    // Print(head);
    a_print(head);
     return 0; 
 }