#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n;
        int check[1005];memset(check,0,sizeof(check));
        pair<int,int> a[n+1];
        for(int i=0;i<n;i++){
            cin>>x>>a[i].second>>a[i].first;
        }
        x=0;int d=0;
        sort(a,a+n,greater<pair<int,int>>());
        for(int i=0;i<n;i++){
            for(int j=a[i].second;j>=1;j--){
                if(!check[j]){
                    x+=a[i].first;
                    check[j]=1;
                    d++;break;
                }
            }
        }
        cout<<d<<" "<<x<<endl;
    }
}