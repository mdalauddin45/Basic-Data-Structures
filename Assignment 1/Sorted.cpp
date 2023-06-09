#include <bits/stdc++.h>
using namespace std;
int arraySortedOrNot(int arr[], int n)
{
	if (n == 1 || n == 0)
		return 1;
	if (arr[n - 1] < arr[n - 2])
		return 0;
	return arraySortedOrNot(arr, n - 1);
}
int main()
{
    long long n;
    cin>>n;
    int i=0;
    while (i<n)
    {
        long long x;
        cin>>x;
        int arr[x];
        for(int j=0;j<x;j++)
        {
            cin>>arr[j];
        }
       if (arraySortedOrNot(arr, n))
		cout << "YES\n";
	   else
		cout << "NO\n";
        i++;
    }
    return 0;
}
