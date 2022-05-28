#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        pair<int,int> a[n+1];
        for(int i=0;i<n;i++) {
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a,a+n);
        int kq=-1,m=a[0].second,k=a[0].first;
        for(int i=1;i<n;i++){
            if(a[i].first>k) kq=max(kq,a[i].second-m);
            if(m>a[i].second){
                m=a[i].second;
                k=a[i].first;
            }
        }
        cout<<kq<<endl;
    }
}