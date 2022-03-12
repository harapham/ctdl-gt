#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]*=a[i];
        }
        sort(a,a+n);
        int ok=0;
        for(int i=0;i<n-2;i++){
            int l=n-2,r=n-1;
            while(l>i){
                long long p=a[r]-a[l];
                if(p==a[i]){
                    cout<<"YES"<<endl;
                    ok=1;break;
                }
                else if(p>a[i]) r--;
                else l--;
            }
        }
        if(!ok) cout<<"NO"<<endl;
    }
}