#include<bits/stdc++.h>
using namespace std;
string s1,s2; int c[1005][1005];
int qhd(){
    int n=s1.length(),m=s2.length();
    c[0][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]) c[i][j]=c[i-1][j-1]+1;
            else c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
    }
    return c[n][m];
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>s1>>s2;
        cout<<qhd()<<endl;
    }
}