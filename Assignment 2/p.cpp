#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void createHead(Node* &head, Node* &tail, int v)
{
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void createTail(Node* &head, Node* &tail, int v)
{
    Node *newNode = new Node(v);
     if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode; 
}
void print(Node* head, Node* tail)
{
    Node * temp = head;
    Node * temp1 = tail;
    while (temp!=NULL && temp1!=NULL)
    {
        cout<<temp->val<<" "<<temp1->val;
        temp= temp->next;
        temp1=temp1->next;
    }
    cout<<endl;
   
}
int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
         int x,v;
        cin >>x>>v;
        if (x == 0) {
            createHead(head,tail,v);
        } else if (x == 1) {
            createTail(head,tail,v);
        }  
         print(head,tail);
    }
    return 0;
}