#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string d,c,tmp,s;cin>>s;
        stack<string> st;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                d=st.top();st.pop();
                c=st.top();st.pop();
                tmp='('+d+s[i]+c+')';
                st.push(tmp);
            }
            else st.push(string(1,s[i]));
        }
        cout<<st.top()<<endl;
    }
}