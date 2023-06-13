#include <iostream>
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
void insert_at_tial(Node*&head,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL)
    {
         temp= temp->next;
    }
    temp->next=newNode;
}
void printMiddle(Node* head) {
    if (head == NULL) {
        cout << "Empty list" << endl;
        return;
    }
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    if (fast == nullptr) {
        cout<< prev->val << " " << slow->val << endl;
    } else {
        cout<< slow->val << endl;
    }
}
int main() {
    int v;
    Node * head =NULL;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tial(head,v);
    }
    printMiddle(head);
    return 0;
}
