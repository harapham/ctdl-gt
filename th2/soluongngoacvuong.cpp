#include<bits/stdc++.h>
using namespace std;
main(){
    string s;cin>>s;
    int c=0,n=s.size();
    s=" "+s;
    stack<int> st;
    int dem[1005];
    for(int i=1;i<=n;i++){
        if(s[i]=='[') c++;
        dem[i]=c;
    }
    st.push(0);
    int kq=0;
    for(int i=1;i<=n;i++){
        if(s[i]=='('||s[i]=='[') st.push(i);
        else{
            if(!st.empty()&&((s[i]==')'&&s[st.top()]!='(')||
                (s[i]==']'&&s[st.top()]!='['))) st.push(i);
            else{
                st.pop();
                kq=max(kq,dem[i]-dem[st.top()]);
            }
            if(st.empty()) st.push(i);
        } 
    }
    cout<<kq<<endl;
}