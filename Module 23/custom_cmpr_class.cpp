#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class Compare
{
    public:
        bool operator()(Student s1, Student s2)
        {
            if(s1.marks <= s2.marks) return true;
            else return false;
        }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, Compare> pq;
    for(int i=0; i<n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student s(name, roll, marks);
        pq.push(s);
    }
    while (!pq.empty())
    {
        Student s = pq.top();
        cout << s.name << " " << s.roll << " " << s.marks << endl;
        pq.pop();
    }
    
    return 0;
}