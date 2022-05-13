#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
void que(){
    queue<string> q;
    string fi,se;
    v.push_back(4);v.push_back(7);
    q.push("4");q.push("7");
    while(!q.empty()){
        string x=q.front();q.pop();
        fi=x+'4';se=x+'7';
        q.push(fi);q.push(se);
        if(fi.size()==10) return;
        v.push_back(stoll(fi));
        if(se.size()==10) return;
        v.push_back(stoll(se));
    }
}
main(){
    long long a,b; cin>>a>>b;
    que();
    long long tong=0,k=a;
    while(k<=b){
        auto l=lower_bound(v.begin(),v.end(),k);
        tong+=*l*min(b-k+1,*l-k+1);
        k=*l+1;
    }
    cout<<tong<<endl;
}
