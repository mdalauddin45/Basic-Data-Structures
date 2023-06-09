#include <bits/stdc++.h>
using namespace std;
bool arraySortedOrNot(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         long long x;
        cin>>x;
        int arr[x];
        for(int j=0;j<x;j++)
        {
            cin>>arr[j];
        }
       if (arraySortedOrNot(arr, x))
		cout << "YES"<<endl;
	   else
		cout << "NO"<<endl;
    }
    return 0;
}
