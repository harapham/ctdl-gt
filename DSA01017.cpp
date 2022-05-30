#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int g[s.size()+1];
        g[0]=s[0]-'0';
        for(int i=1;i<s.size();i++){
            g[i]=abs(s[i-1]-s[i]);
        }
        for(int i=0;i<s.size();i++) cout<<g[i];
        cout<<endl;
    }
}