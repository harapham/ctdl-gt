#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3; int c[105][105][105],n1,n2,n3;
int qhd(){
    c[0][0][0]=0;
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            for(int k=1;k<=n3;k++){
                if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1]) c[i][j][k]=c[i-1][j-1][k-1]+1;
                else c[i][j][k]=max(c[i-1][j][k],max(c[i][j-1][k],c[i][j][k-1]));
            }
        }
    }
    return c[n1][n2][n3];
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n1>>n2>>n3>>s1>>s2>>s3;
        cout<<qhd()<<endl;
    }
}