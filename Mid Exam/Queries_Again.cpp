#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* pre;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void printList(Node* head, Node* tail) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "R -> ";
    temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->pre;
    }
    cout << endl;
}
void insert_head(Node*&head,Node* &tail,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->pre=newNode;
    head=newNode;
}
void insert_at_pos(Node*& head, Node*& tail, int pos, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    int i = 0;
    
    if (pos < 0) {
        cout << "Invalid" << endl;
        return;
    }
    if (head == NULL) {
        if (pos == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }
    }
    else if (pos == 0) {
        insert_head(head,tail,val);
    }
    else {
        while (i < pos - 1 && temp->next != NULL)
        {
            temp = temp->next;
            i++;
        }
        if (i < pos - 1 || temp == NULL)
        {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        newNode->pre = temp;
        temp->next = newNode;
        if (newNode->next != NULL)
        {
            newNode->next->pre = newNode;
        }
        else
        {
            tail = newNode;
        }
    }
    printList(head, tail);
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;
        insert_at_pos(head, tail, x, v);
    }
    return 0;
}
