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
//link list create in tail
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
//normaly print 
void Print_list(Node * head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
//max_value
int max_value (Node * head)
{
    int max=INT_MIN;
    while (head != NULL) {
        if (max < head->val){
            max = head->val;}
        head = head->next;
    }
    return max;
}
//min value 
int min_value ( Node * head)
{
    int min=INT_MAX;
    while (head!=NULL)
    {
        if(min > head->val){
            min = head->val;
        }
            head = head->next;
    }
    return min;
}

int main()
{
    Node * head = NULL;
    int v;
   
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_link_list(head,v);
    }
    // Print_list(head);
    cout<< max_value(head);
    // cout<< min_value(head);
    return 0;
}