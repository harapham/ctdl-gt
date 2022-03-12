#include<bits/stdc++.h>
using namespace std;
main(){
    int n;cin>>n;
    int a[n];
    int b[10005]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]==0){
            cout<<a[i]<<" ";
            b[a[i]]=1;
        }
    }
}