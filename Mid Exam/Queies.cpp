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
void printList(Node*head,Node*tail) {
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
 void insertAtIndex(Node*& head,Node*&tail,int index, int val) {
     Node* temp = head;
    int curIndex = 0;
    if (index < 0) {
        cout << "Invalid" << endl;
        return;
    }
    
    Node* newNode = new Node(val);

    if (head == NULL) {
        if (index == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }
    }
    else if (index == 0) {
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
    }
     else {
        while (curIndex < index - 1 && temp->next != NULL) {
            temp = temp->next;
            curIndex++;
        }
        if (curIndex < index - 1 || temp == NULL) {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        newNode->pre = temp;
        temp->next = newNode;
        if (newNode->next != NULL) {
            newNode->next->pre = newNode;
        }
        else {
            tail = newNode;
        }
    }
        printList(head,tail);
}
int main() {
     Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        insertAtIndex(head,tail,X, V);
    }
    return 0;
}