#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int s,d; cin>>s>>d;
        int a[d+1];
        memset(a,0,sizeof(a));
        if(d*9<s) cout<<-1<<endl;
        else{
            int n=s-1;
            for(int i=d;i>=1;i--){
                if(n>=9){
                    a[i]=9;
                    n-=9;
                }
                else if(n!=0){
                    a[i]=n;
                    n=0;
                }
                else break;
            }
            a[1]++;
            for(int i=1;i<=d;i++) cout<<a[i];
            cout<<endl;
        }
    }
}