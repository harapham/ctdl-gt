#include<bits/stdc++.h>
using namespace std;
int n,k,a[25],c;
void sinh(){
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i>0){
        set<int> s;
        for(int j=1;j<=k;j++) s.insert(a[j]);
        a[i]++;
        if(s.find(a[i])==s.end()) c++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[i]+j-i;
            if(s.find(a[j])==s.end()) c++;    
        }
    }
    else c=k;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>a[i];
        c=0;
        sinh();
        cout<<c<<endl;
    }
}