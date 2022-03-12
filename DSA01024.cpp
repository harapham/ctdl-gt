#include<bits/stdc++.h>
using namespace std;
int n,ok,k,a[35];
string s[35];
void sinh(){
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i>0){
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[i]-i+j;
        for(int j=1;j<=k;j++) cout<<s[a[j]]<<" ";
        cout<<endl;
    }
    else {ok=0;}
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>s[i];
        sort(s+1,s+n+1);
        for(int i=1;i<=n;i++) cout<<s[i];
        for(int i=1;i<n;i++){
            if(a[i]==a[i+1]){
                for(int j=i+1;j<=n;j++) a[j]=a[j+1];
            }
            n--;
        }
        for(int i=1;i<=k;i++){
            a[i]=i;
        }
        for(int j=1;j<=k;j++) cout<<s[a[j]]<<" ";
        cout<<endl;
        ok=1;
        while(ok){
            sinh();
        }
    }
}