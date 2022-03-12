#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void boi(int n){
    int ke=0;
    for(int i=2;i<=n;i++){
        int ok=0;
        int a[i]={0};
        while(!ok){
             int k=i;
            while(a[k]==1&&k>0){a[k]=0;k--;}
            if(k>0){
                a[k]=1;
                ll m=0;
                for(int j=1;j<=i;j++) m=m*10+a[j]*9;
                if(m%n==0&&m>0){
                    cout<<m<<endl;
                    ke=1;
                }
            } 
            else ok=1;
            if(ke) break;
        }
        if(ke) break;
    }
}
main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        boi(n);
    }
}