#include<bits/stdc++.h>
using namespace std;
int n,a[10],b[10]; string s;
void quaylui(int i){
    for(int j=1;j<=n;j++){
        a[i]=j;
        if(i==n){
            cout<<s;
            for(int k=1;k<=n;k++) cout<<a[k];
            cout<<endl;
        }
        else quaylui(i+1);
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) b[i]=i;
    do{
        s="";
        for(int i=1;i<=n;i++) s+=(b[i]+'A'-1);
        quaylui(1);
    }
    while(next_permutation(b+1,b+n+1));
}