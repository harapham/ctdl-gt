#include<bits/stdc++.h>
using namespace std;
int ok,n;
string s;
void sinh(){
    int i=s.length()-1;
    while(i>=0&&s[i]=='B'){s[i]='A';i--;}
    if(i>=0) s[i]='B';
    else ok=0;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        s="";
        for(int i=0;i<n;i++) s+='A';
        ok=1;
        while(ok){
            cout<<s<<" ";
            sinh();
        }
        cout<<endl;
    }
}