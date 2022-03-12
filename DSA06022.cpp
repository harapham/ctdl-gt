#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long n;cin>>n;
        long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int k=0;
        for(int i=0;i<n;i++){
            if(a[i]!=a[i+1]&&i<n-1){
                cout<<a[i]<<" ";
                k++;
            }
            if(i==n-1&&a[i]!=a[i-1]){
                cout<<a[i]<<" ";
                k++;
            }
            if(k==2) break;
        }
        if(k!=2) cout<<"-1";
        cout<<endl;
    }
}