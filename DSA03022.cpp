#include<bits/stdc++.h>
using namespace std;
main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int max1=a[0]*a[1],max2=a[0]*a[1]*a[n-1],max3=a[n-3]*a[n-2]*a[n-1],max4=a[n-2]*a[n-1];
    int m=max(max1,max(max2,max(max3,max4)));
    cout<<m<<endl;
}