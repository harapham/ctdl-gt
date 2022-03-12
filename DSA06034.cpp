#include<bits/stdc++.h>
using namespace std;
int fipos(long a[],int l,int r,long x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            res=m; r=m-1;
        }
        else if(a[m]>x) r=m-1;
        else l=m+1;
    }
    return res;
}
int lapos(long a[],int l,int r,long x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            res=m; l=m+1;
        }
        else if(a[m]>x) r=m-1;
        else l=m+1;
    }
    return res;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long a[n];
       /*  map<long,int> m; */
        for(int i=0;i<n;i++){
            cin>>a[i];
            /* m[a[i]]++; */
        }
        long c=0;
        //c2
        /* for(int i=0;i<n;i++){
            c+=m[k-a[i]];
            if(a[i]*2==k) c--;
        }
        c/=2; */
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            int l=fipos(a,i+1,n-1,k-a[i]);
            int r=lapos(a,i+1,n-1,k-a[i]);
            if(l!=-1) c+=(r-l+1);
        }
        cout<<c<<endl;
    }
}