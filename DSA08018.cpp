#include<bits/stdc++.h>
using namespace std;
vector<string> v;int a[20];
void spl(){
    queue<string> q;
    int n=2; a[1]=2;
    q.push("6"); q.push("8");
    v.push_back("6");v.push_back("8");
    while(1){
        if(q.front().size()>15) break;
        else{
            string s=q.front(); q.pop();
            q.push(s+'6');q.push(s+'8');
            v.push_back(s+'6'); v.push_back(s+'8');
            n+=2;
            a[s.size()+1]=n;
        }
    }
}
main(){
    int n;cin>>n;
    spl();
    while(n--){
        int t;cin>>t;
        int k=0;
        cout<<a[t]<<endl;
        while(v[k].size()<=t){
            cout<<v[k]<<" ";
            k++;
        }
        cout<<endl;
    }
}