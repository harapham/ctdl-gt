#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        multiset<long> mt;
        for(int i=0;i<k;i++) mt.insert(a[i]);
        cout<<*mt.rbegin()<<" ";
        int l=0,r=k;
        while(r<n){
            mt.erase(mt.find(a[l]));
            mt.insert(a[r]);
            cout<<*mt.rbegin()<<" ";
            l++;r++;    
        } 
        cout<<endl;
    }
}