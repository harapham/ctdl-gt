#include<bits/stdc++.h>
using namespace std;
int n,a[20]; char c;
string s;
vector<string> v;
int ok(){
    int m0=0,m1=0,f1=0,f0=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            m0++;m1=0;
        }
        else{m1++;m0=0;}
        f1=max(m1,f1);
        f0=max(m0,f0);
    }
    if(f0>f1&&f0>=5){
        s="";
        for(int i=1;i<=n;i++){
            if(a[i]==0) s+=c;
            else if(c=='X') s+='O';
            else s+='X';
        }
        v.push_back(s);
    }
    return 0;
}
void caro(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) ok();
        else caro(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>c;
        caro(1);
        sort(v.begin(),v.end());
        for(auto x:v) cout<<x<<endl;
        v.clear();
    }
}