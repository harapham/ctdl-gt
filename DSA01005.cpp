#include<bits/stdc++.h>
using namespace std;
int n,ok,a[20];
void sinh(){
    int i=n-1;
    while(i>0&&a[i]>a[i+1])i--;
    if(i>0){
        int j=n;
        while(a[j]<a[i]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
    else ok=0;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) a[i]=i;
        ok=1;
        while(ok){
            for(int i=1;i<=n;i++) cout<<a[i];
            cout<<" ";
            sinh();
        }
        cout<<endl;
    }
}