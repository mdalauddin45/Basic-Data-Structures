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
    Node * temp = head;
    Node * temp1 = head1;
    while (temp!=NULL && temp1!=NULL)
    {
         if(temp->val==temp1->val)return true;
         else  return false;
         temp=temp->next;
         temp1=temp1->next;
    } 
    return true;
}
 int main() 
 { 
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    { 
        cin >> val;
        if (val == -1)
            break;
        insert_link_list(head, tail, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_link_list(head1, tail1, val);
    }
    if( cmp_value(head,head1)==1 && size(head)==size(head1)) cout<<"YES";
    else cout<<"NO";
     return 0; 
 }