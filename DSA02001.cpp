#include<bits/stdc++.h>
using namespace std;
int a[20],n;
void dayso( int k){
    cout<<'[';
    for(int i=0;i<n-k;i++) cout<<a[i]<<" ";
    cout<<a[n-k]<<']'<<endl;
    for(int i=0;i<n-k;i++){
        a[i]+=a[i+1];
    }
    
    if(k==n);
    else dayso(k+1);
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        dayso(1);
    }
}