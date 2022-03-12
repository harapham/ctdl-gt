#include<bits/stdc++.h>
using namespace std;
int n,a[105]={0},ok;
void sinh(){
    int i=n;
    while(i>0&&a[i]==1){a[i]=0;i--;}
    if(i>0) a[i]=1;
    else ok=0;
}
int main(){
    int k,c=0;
    cin>>n>>k;
    int b[n];
    for(int i=1;i<=n;i++) cin>>b[i];
    ok=1;
    while(ok){
        int s=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1) s+=b[i]; 
        }
        if(s==k){
            for(int i=1;i<=n;i++) if(a[i]==1) cout<<b[i]<<" ";
            cout<<endl;
            c++;
        }
        sinh();
    }
    cout<<c<<endl;
}