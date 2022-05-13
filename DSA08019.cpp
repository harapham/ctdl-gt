#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int a[20];
void so(){
    queue<string> q;
    v.push_back("6");
    v.push_back("8");
    q.push("6"); q.push("8");
    a[1]=2;
    int n=2;
    while(1){
        string s=q.front();
        if(s.size()>15) break;
        v.push_back(s+"6");
        v.push_back(s+"8");
        n+=2;
        a[s.size()+1]=n;
        q.push(s+"6");
        q.push(s+"8");
        q.pop();
    } 
}
main(){
    int t;cin>>t;
    so();
    while(t--){
        int n;cin>>n; cout<<a[n]<<endl;
        for(int i=a[n]-1;i>=0;i--) cout<<v[i]<<" ";
        cout<<endl;
    }
}