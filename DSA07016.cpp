#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=1;
        stack<int> st; st.push(n);
        for(int i=0;i<s.size();i++){
            n++;
            if(s[i]=='I'){
                while(st.size()){
                    cout<<st.top();
                    st.pop();
                }
                st.push(n);
            }
            else st.push(n);
        }
        while(st.size()){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}