#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void snp(){
    queue<string> q;
    v.push_back("1");
    q.push("1");
    while(v.size()<10000){
        string top=q.front();
        v.push_back(top+'0'); q.push(top+'0');
        v.push_back(top+'1');q.push(top+'1');
        q.pop();
    }
}
main(){
    int t;cin>>t;
    snp();
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}