#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    cin>>ch;
    vector<int> v(26);
     for(int i=0;i<ch.size();i++){
        int a= ch[i]-'a';
         v[a]++;
    }
    for(int i=0;i<=25;i++){
       if(v[i]!=0){
        // cout<<(i+'a')<<" : "<<v[i]<<endl;
         printf("%c : %d\n",i+'a',v[i]);
       }
    }
    return 0;
}