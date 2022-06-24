#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long lt2[31];
void lt(){
    int k=1;
    for(int i=0;i<=30;i++){
        lt2[i]=k;
        k*=2;
    }
}
long long np(string s){
    long long t=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        t+=(s[i]-'0')*lt2[i];
    }
    return t;
}
main(){
    lt();
    int t;cin>>t;
    while(t--){
        cin>>s1>>s2;
        cout<<np(s1)*np(s2)<<endl;
    }
}