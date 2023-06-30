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
void insert(Node*&head,int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }

    vector<int> findMaxValues(int k) {
     vector<int> maxValues;
        Node* curr = head;

        // Fill a temporary vector with all values from the linked list
        vector<int> tempList;
        while (curr != NULL) {
            tempList.push_back(curr->val);
            curr = curr->next;
        }

        // Sort the temporary vector in descending order
        std::sort(tempList.begin(), tempList.end(), std::greater<int>());

        // Get the maximum k values from the sorted temporary vector
        for (int i = 0; i < k && i < tempList.size(); i++) {
            maxValues.push_back(tempList[i]);
        }

        return maxValues;
}

int main() {
    vector<Node> nodes = {
        {10},
        {30},
        {20},
        {50},
        {40},
        {70},
        {60},
        {90},
        {80},
        {100}
    };

    vector<int> maxValues = findMaxValues(nodes, 5);

    cout << "5 Maximum Values: ";
    for (int value : maxValues) {
        cout << value << " ";
    }
    cout <<endl;

    return 0;
}
