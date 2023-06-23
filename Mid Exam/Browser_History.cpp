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
void insert_String(Node*& head,Node*&tail,string v)
{
    Node* newNode = new Node(v);
    Node* temp = head;
    if (head == NULL) {
        head = newNode;
        tail=newNode;
        return;
    }
   tail->next=newNode;
   newNode->pre=tail;
   tail=newNode;
}

void Print_List(Node* head)
{
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
void insert_Queries()
{
    int n;
    cin>>n;
    cin.ignore();

    vector<string> queries;
    string s;
    for (int i = 0; i < n; ++i) {
        getline(cin, s);
        queries.push_back(s);
    }
    
    // for (int i = 0; i < n; ++i) {
    //     cout<<queries[i]<<endl;
    // }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string val;
    while ( cin>> val && val!="end")
    {
        insert_String(head,tail,val);
    }
    insert_Queries();
    
    Print_List(head);
    return 0;
}