#include<bits/stdc++.h>
using namespace std;
main(){
    int a,b,d=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        long k=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                k+=j;
                int t=i/j;
                if(t!=j) k+=t;
            }
            if(k>i){
                d++;break;
            }
        }
    }
    cout<<d<<endl;
}