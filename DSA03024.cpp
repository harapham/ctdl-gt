#include<bits/stdc++.h>
using namespace std;
struct cv{
    int start,finish;
};
bool cmp(cv a,cv b){
    return a.finish<b.finish;
}
main(){
    int t;cin>>t;
    int n;
    cv a[100005];
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i].start>>a[i].finish;
        }
        sort(a,a+n,cmp);
        int d=1,k=0;
        for(int i=1;i<n;i++){
            if(a[i].start>=a[k].finish){
                d++;k=i;
            }
        }
        cout<<d<<endl;
    }
}