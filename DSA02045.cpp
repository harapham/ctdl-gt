#include<bits/stdc++.h>
using namespace std;
char c[20],kq[20]; int a[20]={0},n;
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(a[j]==0&&kq[i-1]<c[j]){
            kq[i]=c[j];
            a[j]=1;
            for(int k=1;k<=i;k++) cout<<kq[k];
            cout<<" ";
            if(kq[i]!=c[n]) quaylui(i+1);
            a[j]=0;
        }
        
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        kq[0]=0;
        for(int i=1;i<=n;i++) cin>>c[i];
        sort(c+1,c+n+1);
        quaylui(1);
        cout<<endl;
    }
}