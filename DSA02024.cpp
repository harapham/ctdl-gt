#include<bits/stdc++.h>
using namespace std;
int n,a[30];
vector<int> b;
vector<vector<int>> c;
vector<string> la;
void quaylui(int i){
    for(int j=i+1;j<=n;j++){
        if(a[j]>a[i]){
            b.push_back(a[j]);
            if(b.size()>1) c.push_back(b);
            quaylui(j);
            b.erase(b.end()-1);
        }
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    a[0]=0;
    quaylui(0);
    string s;
    for(int i=0;i<c.size();i++){
        s="";
        for(int j=0;j<c[i].size();j++){
            s+=to_string(c[i][j]);
            s+=' ';
        }
        la.push_back(s);
    }
    sort(la.begin(),la.end());
    for(auto x:la) cout<<x<<endl;
}