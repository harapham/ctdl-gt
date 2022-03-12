#include<bits/stdc++.h>
using namespace std;
/* int sum(long long a[],int n,long long k){
    for(int i=0;i<n-2;i++){
        long long c=k-a[i];
        set<long long> us;
        for(int j=i+1;j<n;j++){
            if(us.find(c-a[j])!=us.end()) return 1;
            us.insert(a[j]);
        }
    }
    return 0;
} */
int sum(long long a[],int n,long long k){
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        while(l<r){
            if(a[i]+a[l]+a[r]==k) return 1;
            else if(a[i]+a[l]+a[r]>k) r--;
            else l++;
        }
    }
    return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(sum(a,n,k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}