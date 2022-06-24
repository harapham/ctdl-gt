#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int k;cin>>k;
        string s;cin>>s;
        map<int,int> mp;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        priority_queue<int> q;
        for(auto x:mp){
            q.push(x.second);
        }
        while(q.size()&&k--){
            int i=q.top();q.pop();
            i--;
            if(i>0) q.push(i);
        }
        long long res=0;
        while(q.size()){
            res+=pow(q.top(),2);
            q.pop();
        }
        cout<<res<<endl;
    }
}