#include<bits/stdc++.h>
using namespace std;
int a[10]={1,2,5,10,20,50,100,200,500,1000};
main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int d=0,k=9;
        while(n>0){
            if(n>=a[k]){
                d+=n/a[k];
                n%=a[k];
            }
            else k--;
        }
        cout<<d<<endl;
    }
}