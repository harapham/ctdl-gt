#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,ok=1;cin>>n;
        for(int i=0;i<=n/4;i++){
            if((n-i*4)%7==0){
                ok=0;
                for(int j=0;j<i;j++) cout<<4;
                for(int j=0;j<(n-i*4)/7;j++) cout<<7;
                break;
            }
        }
        if(ok) cout<<-1;
        cout<<endl;
    }
}