#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        queue<long long> q;
        q.push(1);
        while(1){
        long long s=q.front();q.pop();
        if(s%n==0){
            cout<<s<<endl;
            break;
        }
        else{
            q.push(s*10);q.push(s*10+1);
        }
    }
    }
}