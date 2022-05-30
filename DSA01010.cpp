#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[k+1],check[n+1]={0};
        for(int i=1;i<=k;i++) {cin>>a[i];check[a[i]]++;}
        int kq=k;
        int i=k;
        while(i>0&&a[i]==n-k+i){i--;}
        if(i>0){
            a[i]++;
            for(int j=i+1;j<=k;j++) a[j]=a[i]-i+j;
            for(int j=1;j<=k;j++) if(check[a[j]]) kq--;
            cout<<kq<<endl;
        }
        else cout<<k<<endl;

    }
}