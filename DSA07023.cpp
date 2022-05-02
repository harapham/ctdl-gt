#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;cin.ignore();
    while(t--){
        
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tok;
        stack<string> st;
        while(ss>>tok){
            st.push(tok);
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}