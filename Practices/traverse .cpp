#include <iostream>
using namespace std;

class Node {
public:
    char val;
    Node* next;

    Node(char val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node*& head, char data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insert(head, 'P');
    insert(head, 'T');
    insert(head, 'S');
    insert(head, 'K');
    insert(head, 'U');

    traverse(head);

    return 0;
}