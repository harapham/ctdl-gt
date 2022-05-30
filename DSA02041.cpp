#include<bits/stdc++.h>
using namespace std;
int dem(int n){
    if(n<=1) return 0;
    int x=1+n%2+dem(n/2);
    int y=1+n%3+dem(n/3);
    return min(x,y);
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<dem(n)<<endl;
    }
}