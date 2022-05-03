#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
long long kq[105];
void so(){
    queue<string> q;
    v.push_back(9);
    q.push("9");
    while(1){
        string s=q.front();
        if(s.size()>10) break;
        v.push_back(stoll(s+"0"));
        v.push_back(stoll(s+"9"));
        q.push(s+"0");
        q.push(s+"9");
        q.pop();
    }
    for(int i=1;i<=100;i++){
        for(auto x:v){
            if(x%i==0){
                kq[i]=x;break;
            }
        }
    }
}
main(){
    int t;cin>>t;
    so();
    while(t--){
        int n;cin>>n;
        cout<<kq[n]<<endl;
    }
}