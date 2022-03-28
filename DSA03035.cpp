#include<bits/stdc++.h>
using namespace std;
int b[100005]={0};
main(){
    int n;cin>>n;
    int a,m=0;
    for(int i=0;i<n;i++){
        cin>>a;
        b[a]=b[a-1]+1;
        m=max(m,b[a]);
    }
    cout<<n-m<<endl;
}