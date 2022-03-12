#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int i=0,j=n-1;
        while(a[i]==b[i]) i++;
        while(a[j]==b[j]) j--;
        cout<<i+1<<" "<<j+1<<endl;
    }
}