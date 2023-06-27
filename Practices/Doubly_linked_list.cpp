#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* pre;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
void print_head(Node* head)
{
     while (head!=NULL)
    {
       cout<<head->val<<" ";
       head=head->next;
    }
}
void print_tail(Node* tail)
{
     while (tail!=NULL)
    {
       cout<<tail->val<<" ";
       tail=tail->pre;
    }
}
int main()
{
    //node create
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=b;
    //node connection
    head->next=a;
    a->pre=head;
    a->next=b;
    b->pre=a;
    b->next=NULL;

    print_head(head);
    cout<<endl;
    print_tail(tail);
    return 0;
}