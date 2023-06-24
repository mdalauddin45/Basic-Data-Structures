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
void insert_tail_string(Node*& head,Node*&tail,string v)
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
void visit_com(Node* head,Node*&curr,string address)
{
    Node* temp = head;
    while (temp != NULL){
        if (temp->val == address){
        curr = temp;
        cout << curr->val << endl;
        break;
        }
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Not Available" << endl;
    }
}
void next_com(Node*&head)
{
    if(head->next!=NULL){
        head=head->next;
        cout<<head->val<<endl;
    }
    else{
         cout << "Not Available" << endl;
    }
}
void pre_com(Node*&head)
{
    if(head->pre!=NULL){
        head=head->pre;
        cout<<head->val<<endl;
    }
    else{
         cout << "Not Available" << endl;
    }
}
void com_compare(Node* head,vector<string>queries) {
    Node* temp = head;
    string command, address;
    for (string query : queries) {
        istringstream p(query);
        p >> command;

        if (command == "visit"){
            p >> address;
            visit_com(head,temp,address);
        } else if (command == "next"){
            next_com(temp);
        } else if (command == "prev"){
            pre_com(temp);
        }
    }
}
void insert_query(Node* head)
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string> queries;
    string s;
    for (int i=0;i<n;++i){
        getline(cin,s);
        queries.push_back(s);
    }
    // for (int i = 0; i < n; ++i) {
    //     cout<<queries[i]<<endl;
    // }
    com_compare(head,queries);
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
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string val;
    while ( cin>> val && val!="end"){
        insert_tail_string(head,tail,val);
    }  
    // Print_List(head);
    insert_query(head);
    return 0;
}