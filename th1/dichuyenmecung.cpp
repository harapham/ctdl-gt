#include<bits/stdc++.h>
using namespace std;
int n,a[15][15],b[15][15];
vector<string> v;
char kq[100];
void xuly(int i,int j,string s){
    if(!a[1][1]||!a[n][n]) return;
    if(i>n||j>n) return;
    if(i==n&&j==n){
        v.push_back(s);
        return;
    }
    if(a[i+1][j]&&i<n&&!b[i+1][j]){
        b[i][j]=1;
        xuly(i+1,j,s+'D');
        b[i][j]=0;
    }
    if(a[i][j+1]&&j<n&&!b[i][j+1]){
        b[i][j]=1;
        xuly(i,j+1,s+'R');b[i][j]=0;
    }
    if(a[i][j-1]&&j>1&&!b[i][j-1]){
        b[i][j]=1;
        xuly(i,j-1,s+'L');b[i][j]=0;
    }
    if(a[i-1][j]&&i>1&&!b[i-1][j]){
        b[i][j]=1;
        xuly(i-1,j,s+'U');b[i][j]=0;
    }
}
main(){
    int t;cin>>t;
    while(t--){
        v.clear();
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) {cin>>a[i][j];b[i][j]=0;}
        }
        xuly(1,1,"");
        if(v.size()==0)cout<<-1;
        else{
            sort(v.begin(),v.end());
            cout<<v.size()<<" ";
            for(auto x:v) cout<<x<<" ";
        }
        cout<<endl;
    }
}