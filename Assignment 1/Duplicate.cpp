#include<bits/stdc++.h>
using namespace std;
bool duplicate(int arr[],int n)
{
    bool flag =false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
            }
        }
    }
    if(flag==true)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   if(duplicate(arr,n)) cout<<"YES";
   else cout<<"NO";
    return 0;
}