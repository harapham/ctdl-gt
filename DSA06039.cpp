#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long a[n];
        int ok=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    ok=a[i];
                }
                if(ok!=-1) break;
            }
            if(ok!=-1) break;
        }
        if(ok!=-1) cout<<ok;
        else cout<<"NO";
        cout<<endl;
    }
}