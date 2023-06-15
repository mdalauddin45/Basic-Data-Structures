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

 int main() 
 { 
     Node * head = NULL; 
     long long v; 
     while (true) 
     { 
         cin>>v; 
         if(v==-1) break; 
         insert_link_list(head,v); 
     }
    reverse_print(head);
    cout<<endl;

     return 0; 
 }