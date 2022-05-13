#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        stack<char> st;
        string s; cin>>s;
        int ok=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
            else if(!st.empty()&&s[i]==')'&&st.top()=='(') st.pop();
            else if(!st.empty()&&s[i]==']'&&st.top()=='[') st.pop();
            else if(!st.empty()&&s[i]=='}'&&st.top()=='{') st.pop();
            else {ok=1;break;}
        }
        if(!st.empty()) ok=1;
        if(ok) cout<<"false";
        else cout<<"true";
        cout<<endl;
    }
}