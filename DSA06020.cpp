#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        int a[n],ok=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==x) ok=1;
        }
        cout<<ok<<endl;
    }
}