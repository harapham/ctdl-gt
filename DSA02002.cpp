#include<bits/stdc++.h>
using namespace std;
int a[20],b[20][20],n,h;
void dayso(int k){
    for(int i=0;i<=n-k;i++) b[h][i]=a[i];
    h++;
    for(int i=0;i<n-k;i++) a[i]+=a[i+1];
    if(k==n);
    else dayso(k+1);
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        h=0;
        dayso(1);
        for(int i=n-1;i>=0;i--){
            cout<<'[';
            for(int j=0;j<=n-1-i;j++){
                if(j==n-1-i) cout<<b[i][j]<<"] ";
                else cout<<b[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}