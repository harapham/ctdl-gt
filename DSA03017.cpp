#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        map<int,int> mp;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        priority_queue<int> q;
        for(auto x: mp){
            q.push(x.second);
        }
        while(q.size()&&n--){
            int x=q.top();q.pop();
            x--;
            if(x>0) q.push(x);
        }
        long long res=0;
        while(q.size()){
            res+=pow(q.top(),2);
            q.pop();
        }
        cout<<res<<endl;
    }
}