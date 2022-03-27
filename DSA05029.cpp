#include<bits/stdc++.h>
using namespace std;
string s;
int f[10005];
int tinh(){
    if(s[0]=='0') return 0;
    s=' '+s;
    memset(f,0,sizeof(f));
    f[0]=1;f[1]=1;
    for(int i=2;i<s.length();i++){
        if(s[i]!='0') f[i]=f[i-1];
        if(s[i-1]=='1'||(s[i-1]=='2'&&s[i]<'7')) f[i]+=f[i-2];
    }
    return f[s.length()-1];
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>s;
        cout<<tinh()<<endl;
    }
}