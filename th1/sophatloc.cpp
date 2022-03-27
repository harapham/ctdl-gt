#include<bits/stdc++.h>
using namespace std;
int a[15],n,ok;
void sinh(){
    int i=n;
    while(i>0&&a[i]==8){
        a[i]=6;
        i--;
    }
    if(i==0) ok=1;
    else a[i]=8;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) a[i]=6;
        ok=0;
        vector<vector<int>> v;
        while(!ok){
            vector<int> ve;
            for(int i=1;i<=n;i++) ve.push_back(a[i]);
            v.push_back(ve);
            sinh();
        }
        cout<<v.size()<<endl;
        for(auto x:v){
            for(int i=0;i<x.size();i++) cout<<x[i];
            cout<<" ";
        }
        cout<<endl;
    }
}