#include<bits/stdc++.h>
using namespace std;
struct cv{
    int start,finish;
};
bool cmp(cv a,cv b){
    return a.finish<b.finish;
}
main(){
    int t,n;
    cv a[1005];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i].start;
        for(int i=0;i<n;i++) cin>>a[i].finish;
        sort(a,a+n,cmp);
        int k=0,d=1;
        for(int i=1;i<n;i++){
            if(a[i].start>=a[k].finish){
                d++;k=i;
            }
        }
        cout<<d<<endl;
    }
}