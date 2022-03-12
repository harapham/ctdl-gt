#include<bits/stdc++.h>
using namespace std;
char a[20],b[20]; 
int n,ok[20];
void Try(int k){
    for(int i=0;i<n;i++){
        if(ok[i]){
            a[k]=b[i];
            ok[i]=0;
            if(k==n-1){
                for(int j=0;j<n;j++) cout<<a[j];
                cout<<" ";
            }
            else Try(k+1);
            ok[i]=1;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        n=s.length();
        for(int i=0;i<n;i++) ok[i]=1;
        for(int i=0;i<n;i++) b[i]=s[i];
        sort(b,b+n);
        Try(0);
        cout<<endl;
    }
}
