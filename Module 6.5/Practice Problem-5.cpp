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
void insert_tail(Node* &head,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node * temp = head;
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next=newNode;
}
bool sorted_ki_na(Node * head)
{
    if(head == NULL)
    {
        return true;
    }
    Node* temp = head;
    while (temp->next!=NULL)
    {
        if(temp->val>temp->next->val)
        {
            return false;
        }
        temp=temp->next;
    }
    return true;
    
}
int main()
{
    int v;
    Node * head = NULL;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_tail(head,v);
    }
    if(sorted_ki_na(head)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}