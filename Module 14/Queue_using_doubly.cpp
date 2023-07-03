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
class myQueue
{
    public:
    Node* head = NULL;
    Node* tail= NULL;
    int sz=0;
    void push(int val)
    {
         sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->pre = tail;
        tail = tail->next;
    }
    void pop()
    {
       sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->pre = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    // myQueue q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // q.pop();

    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    // Queue input

    myQueue s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    while (!s.empty())
    {
        cout<<s.front()<<endl;
        s.pop();
    }

    // myQueue q;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     q.push(x);
    // }
    // while (!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    return 0;
}