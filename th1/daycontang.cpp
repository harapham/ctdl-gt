#include<bits/stdc++.h>
using namespace std;
int n,a[25];
vector<int> v;
vector<vector<int>> la;
vector<string> kq;
void quaylui(int i){
    for(int j=i+1;j<=n;j++){
        if(a[j]>a[i]){
            v.push_back(a[j]);
            if(v.size()>1) la.push_back(v);
            quaylui(j);
            v.erase(v.end()-1);
        }
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    a[0]=0;
    quaylui(0);
    for(int i=0;i<la.size();i++){
        string s="";
        for(int j=0;j<la[i].size();j++){
            s+=to_string(la[i][j]);
            s+=' ';
        }
        kq.push_back(s);
    }
    sort(kq.begin(),kq.end());
    for(auto x:kq) cout<<x<<endl;
}