#include<bits/stdc++.h>
using namespace std;
map<int,int> p;
bool cmp(int a,int b){
    if(p[a]!=p[b]) return p[a]>p[b];
    else return a<b;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            p[a[i]]++;
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
        p.clear();
    }
}