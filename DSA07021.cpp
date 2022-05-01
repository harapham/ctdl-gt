#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<int> st;
        st.push(-1);
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else{
                st.pop();
                if(st.size()>0) {k=max(k,i-st.top());}
                else {st.push(i);}
            }
        }
        cout<<k<<endl;
    }
}