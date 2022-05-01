#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    string s;
    while(t--){
        cin.ignore();
        cin>>s;
        int ok=0;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/') st.push(s[i]);
            if(s[i]==')'){
                if(st.top()=='('){
                    ok=1;
                    break;
                }
                while(st.size()&&st.top()!='(') st.pop();
                st.pop();
            }
        }
        if(ok) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}