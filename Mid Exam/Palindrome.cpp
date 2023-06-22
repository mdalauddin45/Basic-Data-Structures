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
void insert_linked_list(Node*&head,Node*&tail,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
   tail->next=newNode;
   tail=newNode;
}
void reverse(Node*&head,Node* cur)
    {
        if(cur->next==NULL)
        {
            head=cur;
            return;
        }
        reverse(head,cur->next);
        cur->next->next=cur;
        cur->next=NULL;
    }
bool compare(Node* head) {
    Node* newHead = NULL;
    Node* newTail = NULL;
    Node* temp = head;
    while(temp!=NULL)
    {
       insert_linked_list(newHead,newTail,temp->val);
        temp = temp->next;
    } 
    reverse(newHead,newHead);
    temp = head;
    Node* temp2= newHead;
    while(temp!=NULL)
    {
        if(temp->val!=temp2->val)
        {
            return false;
        }
        temp =temp->next;
        temp2=temp2->next;
    }
    return true;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_linked_list(head,tail,v);
    }
    compare(head)? cout<<"YES" : cout<<"NO";
    return 0;
}