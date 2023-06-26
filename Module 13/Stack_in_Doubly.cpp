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
class myStack
{
    public:
    //  list<int>l;
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;
        void push(int val)
        {
            // l.push_back(val); //this is means tail insert 
            sz++;
            Node* newNode = new Node(val);
            if(head==NULL)
            {
                head=newNode;
                tail=newNode;
                return;
            }
            tail->next=newNode;
            tail=tail->next;
        }
        void pop()
        {
            // l.pop_back(); // this line maens that tail delete
            sz--;
            Node* deleteNode = tail;
            tail=tail->pre;
            if(tail==NULL) head=NULL;
            delete deleteNode;
        }
        int top()
        {
            // return l.back(); //tail er value return kory
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz==0) return true;
            else return false;
        }
};
int main()
{
    
    return 0;
}
