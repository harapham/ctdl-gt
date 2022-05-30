#include<bits/stdc++.h>
using namespace std;
int nt[205],a[15],b[105],n,s,k,d,p;
vector<string> v;
void snt(){
    memset(nt,1,sizeof(nt));
    nt[1]=0;
    for(int i=2;i<=200;i++){
        if(nt[i]){
            for(int j=2*i;j<=200;j+=i) nt[j]=0;
        }
    }
}
void ql(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            int sum=0;
            for(int l=1;l<=k;l++){
                sum+=b[a[l]];
            }
            if(sum==s){
                d++;
                string kq={};
                for(int l=1;l<=k;l++){
                    kq+=to_string(b[a[l]])+' ';
                }
                v.push_back(kq);
            }
        }
        else ql(i+1);
    }
}
main(){
    int t;cin>>t;
    snt();
    while(t--){
        v.clear();
        cin>>k>>p>>s;
        d=0;n=1;
        for(int i=p+1;i<=200;i++){
            if(nt[i]) b[n++]=i;
        }
        ql(1);
        cout<<d<<endl;
        for(auto x:v) cout<<x<<endl;
    }
}