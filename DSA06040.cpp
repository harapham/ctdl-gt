#include<bits/stdc++.h>
using namespace std;
void nhap(long long x[],int n){
    for(int i=0;i<n;i++) cin>>x[i];
}
int main(){
    int t;cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        long long a[n1],b[n2],c[n3];
        nhap(a,n1);nhap(b,n2);nhap(c,n3);
        int ok=0;
        int i=0,j=0,k=0;
        long long p1,p2,p3; p1=p2=p3=-1;
        while(i<n1&&j<n2&&k<n3){
            while(a[i]==p1&&i<n1) i++;
            while(b[j]==p2&&j<n2) j++;
            while(c[k]==p3&&k<n3) k++;
            if(a[i]==b[j]&&b[j]==c[k]){
                cout<<a[i]<<" ";
                ok=1;
                p1=a[i];p2=b[j];p3=c[k];
                i++;j++;k++;
            }
            else if(a[i]<b[j]){
                p1=a[i]; i++;
            }
            else if(b[j]<c[k]){
                p2=b[j];j++;
            }
            else{
                p3=c[k];k++;
            }
        }
        if(ok==0) cout<<"-1";
        cout<<endl;
    }
}