#include<bits/stdc++.h>
using namespace std;
int n,a[20],ok;
vector<string> v;
void sinh(){
    int i=n;
    while(a[i]==8&&i>0){
        a[i]=6;
        i--;
    }
    if(i>0) a[i]=8;
    else ok=0;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        ok=1;
        for(int i=1;i<=n;i++) a[i]=6;
        while(ok){
            string s="";
            for(int i=1;i<=n;i++) s+=to_string(a[i]);
            v.push_back(s);
            sinh();
        }
        cout<<v.size()<<endl;
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
        v.clear();
    }
}