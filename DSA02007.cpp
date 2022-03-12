#include<bits/stdc++.h>
using namespace std;
int k; string s,m;
void quaylui(int k){
    if(k==0) return;
    int n=s.length();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[j]>s[i]){ 
                swap(s[j],s[i]);
                if(s.compare(m)>0) m=s;
                quaylui(k-1);
                swap(s[j],s[i]);
            }
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>k>>s;
        m=s;
        quaylui(k);
        cout<<m<<endl;
    }
}
//ko kha thi