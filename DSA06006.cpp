#include<bits/stdc++.h>
using namespace std;
void in(int n,int s){
    for(int i=0;i<n;i++){
        cout<<s<<" ";
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int s0=0,s1=0,s2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0) s0++;
            else if(a[i]==1) s1++;
            else s2++;
        }
        in(s0,0);in(s1,1);in(s2,2);
        cout<<endl;
    }
}