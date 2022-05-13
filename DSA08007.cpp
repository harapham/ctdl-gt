#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string n;
        cin>>n;
        queue<string> q;
        q.push("1");
        int d=0;
        while(!q.empty()){
            string s=q.front();q.pop();
            if(s.size()>n.size()||(s.size()==n.size()&&s>n)) break;
            else{
                q.push(s+'0');
                q.push(s+'1');
            }
            d++;
        }
        cout<<d<<endl;
    }
}