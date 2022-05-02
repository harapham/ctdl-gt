#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<int> st;
        int fi,se;
        for(int i=s.size();i>=0;i--){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                se=st.top();st.pop();
                fi=st.top();st.pop();
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