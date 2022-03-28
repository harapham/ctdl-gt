#include<bits/stdc++.h>
using namespace std;
int n,m,k;
long long a[100005],b[100005],c[100005];
void tim(){
    int ok=0;
    int i=0,j=0,l=0;
    while(i<n&&j<m&&l<k){
        if(a[i]==b[j]&&b[j]==c[l]){
            ok=1;
            cout<<a[i]<<" ";
            i++;j++;l++;
        }
        else if(b[j]>a[i]) i++;
        else if(b[j]>c[l]) l++;
        else j++;
    }
    if(!ok) cout<<"NO";
    cout<<endl;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        for(int i=0;i<k;i++) cin>>c[i];
        tim();
    }
}