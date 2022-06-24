#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        long long p,q;
        cin>>p>>q;
        while(q%p!=0){
            long long x=q/p;
            cout<<1<<"/"<<x+1<<" + ";
            p=p*(x+1)-q;
            q=q*(x+1);
        }
        cout<<1<<'/'<<q/p<<endl;
    }
}