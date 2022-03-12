#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int min=INT_MAX,f;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(a[i]+a[j])<min){
                    min=abs(a[i]+a[j]);
                    f=a[i]+a[j];
                }
            }
        }
        cout<<f<<endl;
    }
}