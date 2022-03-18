#include<bits/stdc++.h>
using namespace std;
int a[105][105],m,n,c;
void dem(int i,int j){
    if(i==m-1&&j==n-1) c++;
    else{
        if(i+1<m){
             dem(i+1,j);
        }
        if(j+1<n){
            dem(i,j+1);
        } 
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>m>>n;
        for(int i=0;i<m;i++) for(int j=0;j<n;j++){ cin>>a[i][j];}
        c=0;dem(0,0);
        cout<<c<<endl;
    }
}