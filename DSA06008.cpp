#include<bits/stdc++.h>
using namespace std;
int count(int y[],int n,int x,int dem[]){
    if(x==0) return 0;
    if(x==1) return dem[0];
    int *f=upper_bound(y,y+n,x);
    int k=y+n-f;
    k+=(dem[0]+dem[1]);
    if(x==2) k=k-dem[3]-dem[4];
    if(x==3) k+=dem[2];
    return k;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x[n],y[m];
        int dem[5]={0};
        for(int i=0;i<n;i++) cin>>x[i];
        for(int i=0;i<m;i++){ 
            cin>>y[i];
            if(y[i]<5) dem[y[i]]++;
        }
        sort(y,y+m);
        int c=0;
        for(int i=0;i<n;i++){
            c+=count(y,m,x[i],dem);
        }
        cout<<c<<endl;
    }
}
/*
x<y -> x^y>y^x
x>1 dung voi moi y=0 va y=1
ngoai le:
- x=0 ->dem=0;
- x=1 ->dem= so y=0;
- x=2 loai truong hop y=3 va y=4
- x=3 tinh them y=2
*/