#include<bits/stdc++.h>
using namespace std;
int n,ok;
string s;
int check(){
    if(s[n-1]!='A') return 0;
    for(int i=0;i<n-1;i++) if(s[i]=='H'&&s[i+1]=='H') return 0;
    return 1;
}
void sinh(){
    int i=n-1;
    while(i>0&&s[i]=='H'){s[i]='A';i--;}
    if(i>1) s[i]='H';
    else ok=0;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n; 
        s='H';
        for(int i=1;i<n;i++) s+='A';
        ok=1;
        while(ok){
            if(check()) cout<<s<<endl;
            sinh();
        }
    }
}