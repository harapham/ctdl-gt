#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'&&!st.empty()){
                if(st.top()=='('){
                    st.pop();
                }
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }
        int k=st.size(),n=0;
        while(!st.empty()&&st.top()=='('){
            n++;
            st.pop();
        }
        cout<<k/2+n%2<<endl;
    }
}