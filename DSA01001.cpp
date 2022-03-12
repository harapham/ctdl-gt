#include<bits/stdc++.h>
using namespace std;
void sinh(string &s){
    int i=s.length()-1;
    while(s[i]=='1'){s[i]='0';i--;}
    if(i>=0) s[i]='1';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        sinh(s);
        cout<<s<<endl;
    }
}