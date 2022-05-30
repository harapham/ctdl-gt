#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<char> st;
        int ok=0,m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {st.push(s[i]);ok++; m=max(m,ok);}
            else if(st.size()&&s[i]==')') {st.pop();ok--;}
            
        }
        if(st.size()) cout<<-1<<endl;
        else{
            cout<<m<<endl;
        }
    }
}