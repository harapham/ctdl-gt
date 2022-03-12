#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int i=0;
        while(i<n-1&&a[i]<a[i+1]) i++;
        if(i==n-1) cout<<'0';
        else cout<<i+1;
        cout<<endl;
    }
}