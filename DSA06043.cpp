#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],l=0,r=0,m=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0) l=a[i];
            else if(i>1) r+=a[i]; 
        } 
        int ok=0;
        while(m<n-1){
            if(l==r){
                cout<<m+1<<endl;ok=1; break;
            }
            else{
                l+=a[m];
                r-=a[m+1];
                m++;
            }
        }
        if(ok==0) cout<<"-1"<<endl;
    }
}