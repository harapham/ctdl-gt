#include<bits/stdc++.h>
using namespace std;
int c[15][15],a[15],ok,n,k;
void sinh(){
    int i=n-1;
    while(i>0&&a[i]>a[i+1]) i--;
    if(i>0){
        int j=n;
        while(a[j]<a[i]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
    else ok=0;
}
main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        a[i]=i;
        for(int j=1;j<=n;j++) cin>>c[i][j];
    }
    ok=1;
    int d=0;
    vector<string> v;
    while(ok){
        int s=0;
        for(int i=1;i<=n;i++){
            s+=c[i][a[i]];
        }
        if(s==k){
            d++;
            string kq={};
            for(int i=1;i<=n;i++){
                kq+=to_string(a[i])+' ';
            }
            v.push_back(kq);
        }
        sinh();
    }
    cout<<d<<endl;
    for(auto x:v) cout<<x<<endl;

}