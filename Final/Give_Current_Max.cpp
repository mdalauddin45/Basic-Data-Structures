#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class Compare
{
    public:
    bool operator()(Student s1, Student s2)
    {
        if (s1.marks != s2.marks) return s1.marks < s2.marks;
        else return s1.roll > s2.roll;
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,Compare>pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student s(name,roll,marks);
        pq.push(s);
    }
    int x;
    cin>>x;
    while (x--)
    {
        int cmd;
        cin>>cmd;
        if(cmd==0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student s(name,roll,marks);
            pq.push(s);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }else if(cmd==1)
        {
            if (pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }else if(cmd==2)
        {
            if (pq.empty()) cout<<"Empty"<<endl;
            else
            {
                pq.pop();
                if (pq.empty()) cout<<"Empty"<<endl;
                else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
    }
    
    return 0;
}