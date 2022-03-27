#include<bits/stdc++.h>
using namespace std;
int n,a[105],b[105],ok,k,s;
void quaylui(int x){
    for(int i=1;i<=n;i++){
        if(b[i]){
            s+=a[i];
            b[i]=0;
            if(s==k/2){
                ok=1;
                return;
            }
            if(s<k/2) quaylui(x+1);
            b[i]=1;
            s-=a[i];
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        k=0;s=0;
        for(int i=1;i<=n;i++) {cin>>a[i];k+=a[i];b[i]=1;}
        if(k%2==0){
            ok=0;
            quaylui(1);
            if(!ok) cout<<"NO"<<endl; 
            else cout<<"YES"<<endl;   
        }
        else cout<<"NO"<<endl;
        
    }
}