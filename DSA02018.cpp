#include<bits/stdc++.h>
using namespace std;
int ok,number[6],b[6];
void quaylui(int i,int s){
    if(s==23&&i==5) {ok=1; return;}
    for(int j=0;j<5;j++){
        if(b[j]==0){
            b[j]=1;
            quaylui(i+1,s+number[j]);
            quaylui(i+1,s*number[j]);
            quaylui(i+1,s-number[j]);
            b[j]=0;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        for(int i=0;i<5;i++) cin>>number[i];
        ok=0;
        for(int i=0;i<5;i++){
            b[i]=1;
            quaylui(1,number[i]);
            b[i]=0;
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}