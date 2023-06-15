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
 void insert_link_list(Node * &head,int x, int v) 
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
 void print_Link_List(Node*head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
 int main() 
 { 
     Node * head = NULL; 
    int q;
    cin>>q;
    int x,v;
    int i=0;
     while (i<q) 
     { 
         cin>>x>>v;
         insert_link_list(head,x,v); 
         i++;
     }

     return 0; 
 }