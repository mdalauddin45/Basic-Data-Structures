#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    string val;
    Node* next;
    Node* pre;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void insert_String(Node*& head,string v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->next=head;
    head->pre=newNode;
    head=newNode;
}
void Print_List(Node* head)
{
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    // cout<<endl;
}
int main()
{
    Node* head = NULL;
    // Node* tail = NULL;

    string val;
    while ( cin>> val && val!="end")
    {
        insert_String(head,val);
    }
    Print_List(head);
    return 0;
}