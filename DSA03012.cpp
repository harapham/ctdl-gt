#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int a['z'+1]={0};
        for(int i=0;i<s.length();i++) a[s[i]]++;
        int m=*max_element(a+'a',a+'z'+1);
        if(m>s.size()-m+1) cout<<"-1"<<endl;
        else cout<<"1"<<endl;
    }
}