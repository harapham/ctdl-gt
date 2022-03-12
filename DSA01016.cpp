#include<bits/stdc++.h>
using namespace std;
int n,a[50];
void in(int n){
    cout<<"(";
    for(int i=1;i<n;i++) cout<<a[i]<<" ";
    cout<<a[n]<<") ";
}
void quaylui(int x,int i,int s){// s la phan con lai
    for(int j=x;j>=1;j--){
        a[i]=j;
        if(s-j==0) in(i);
        else if(s-j>0){
            quaylui(j,i+1,s-j);
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        quaylui(n,1,n);
        cout<<endl;
    }
}