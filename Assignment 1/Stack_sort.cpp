#include <bits/stdc++.h>
using namespace std;

void isSorted(int a[], int n)
{
	stack<int> s;
	for (int i=0;i<n;i++) {
		if (s.empty() || a[i] >= s.top()) {
			s.push(a[i]);
		}
		else {
			break;
		}
	}
	if (s.size() == n) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int j=0;j<x;j++)
        {
            cin>>arr[j];
        }
        isSorted(arr,x);
    }
	return 0;
}
