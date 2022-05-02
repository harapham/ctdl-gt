#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string d,c,tmp;
        stack<string> st;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                d=st.top();st.pop();
                c=st.top();st.pop();
                tmp=d+c+s[i];
                st.push(tmp);
            }
            else st.push(string(1,s[i]));
        }
        cout<<st.top()<<endl;
    }
}