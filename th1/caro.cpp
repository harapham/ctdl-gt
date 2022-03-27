#include<bits/stdc++.h>
using namespace std;
int n,a[20];
char x;vector<string> v;
void kq(){
    int d0=0,d1=0,max0=0,max1=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            d0++;d1=0;
        }
        else {
            d1++;d0=0;
        }
        max0=max(d0,max0);
        max1=max(d1,max1);
    }
    if(max0>max1&&max0>=5){
        string s="";
        for(int i=1;i<=n;i++){
            if(a[i]==0) s+=x;
            else if(x=='O') s+='X';
            else if(x=='X') s+='O';
        }
        v.push_back(s);
    }
}
void quaylui(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) kq();
        else quaylui(i+1);
    }
}

main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>x;
        quaylui(1);
        sort(v.begin(),v.end());
        for(auto x:v) cout<<x<<endl;
        v.clear();
    }
}