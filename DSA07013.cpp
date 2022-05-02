#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        int fi,se;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                fi=st.top();st.pop();
                se=st.top();st.pop();
                if(s[i]=='+') st.push(se+fi);
                else if(s[i]=='-') st.push(se-fi);
                else if(s[i]=='*') st.push(se*fi);
                else if(s[i]=='/') st.push(se/fi);
                else if(s[i]=='^') st.push(se^fi);
            }
            else st.push(s[i]-'0');
        }
        cout<<st.top()<<endl;
    }
}