#include<bits/stdc++.h>
using namespace std;
int a[20],b[20],n,k,ck;
void in(int a[],int b[],int n){
    cout<<'[';
    int ok=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            if(!ok) {cout<<b[i];ok=1;}
            else cout<<" "<<b[i];
        }
    }
    cout<<"] ";
}
void Try(int i){
    for(int j=1;j>=0;j--){
        a[i]=j;
        if(i==n){
            int c=0;
            for(int l=1;l<=n;l++) if(a[l]==1) c+=b[l];
            if(c==k) {in(a,b,n);ck=1;}
        }
        else Try(i+1);
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>b[i];
        sort(b+1,b+1+n);
        ck=0;
        Try(1);
        if(!ck) cout<<"-1";
        cout<<endl;
    }
}