#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int b[s.size()+1];
        b[0]=s[0]-'0';
        for(int i=1;i<s.size();i++){
            if(s[i]=='1'){
                b[i]=1-b[i-1];
            }
            else b[i]=b[i-1];
        }
        for(int i=0;i<s.size();i++) cout<<b[i];
        cout<<endl;
    }
}