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
bool cmp_value(Node * head, Node * head1)
{
    if(head->val==head1->val) return true;
    else return false;
}
 int main() 
 { 
     Node * head = NULL; 
     Node * head1= NULL; 
     int v; 
     while (true) 
     { 
         cin>>v; 
         if(v==-1) break; 
         insert_link_list(head,v); 
     }
    //  print_Link_List(head);
     while (true) 
     { 
         cin>>v; 
         if(v==-1) break; 
         insert_link_list(head1,v); 
     }
    //  print_Link_List(head1);
    if(cmp_value(head,head1)==1 && size(head)==size(head1)) cout<<"YES";
    else cout<<"NO";
    //  cout<<cmp_value(head,head1);
     return 0; 
 }