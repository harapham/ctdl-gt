#include<bits/stdc++.h>
using namespace std;
int pri[1000001];
void sieve(){
    for(int i=0;i<1000001;i++) pri[i]=1;
    pri[0]=pri[1]=0;
    for(int i=2;i<=1000;i++){
        if(pri[i]){
            for(int j=i*i;j<1000000;j+=i) pri[j]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    sieve();
    while(t--){
        int n;
        cin>>n;
        int ok=0;
        for(int i=2;i<=n/2;i++){
            if(pri[i]&&pri[n-i]) {cout<<i<<" "<<n-i<<endl;ok=1;break;}
        }
        if(!ok) cout<<"-1"<<endl;
    }
}