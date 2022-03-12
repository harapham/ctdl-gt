#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int max=a[0];
        for(auto x:m) if(x.second>m[max]) max=x.first;
        if(m[max]>n/2) cout<<max<<endl;
        else cout<<"NO"<<endl;
    }
}