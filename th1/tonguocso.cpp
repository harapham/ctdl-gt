#include<bits/stdc++.h>
using namespace std;
int kt(int n){
    int s=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            s+=i;
            int t=n/i;
            if(i!=t) s+=t;
            if(s>n) return 1;
        }
    }
    return 0;
}
main(){
    int a,b,d=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++) if(kt(i)) d++;
    cout<<d<<endl;
}