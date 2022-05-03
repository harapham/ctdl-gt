#include<bits/stdc++.h>
using namespace std;
main(){
    int t,a;cin>>t;
    queue<int> q;
    string s;
    while(t--){
        cin>>s;
        if(s=="PUSH"){
            cin>>a;
            q.push(a);
        }
        else if(s=="POP"){
            if(!q.empty()) q.pop();
        }
        else{
            if(!q.empty()) cout<<q.front()<<endl;
            else cout<<"NONE"<<endl;
        }
    }
}