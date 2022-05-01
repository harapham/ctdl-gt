#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    int a;
    stack<int> st;
    string s;
    while(t--){
        cin>>s;
        if(s=="PUSH"){
            cin>>a;
            st.push(a);
        }
        else if(s=="POP") {if(st.size()) st.pop();}
        else{
            if(st.size()) cout<<st.top()<<endl;
            else cout<<"NONE"<<endl;
        }
    }
}