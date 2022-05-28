#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.size(),l2=s2.size();
        int d[l1+1][l2+1];
        memset(d,0,sizeof(d));
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(s1[i]==s2[j]){
                    d[i+1][j+1]=d[i][j]+1;
                }
                else d[i+1][j+1]=max(d[i][j+1],d[i+1][j]);
            }
        }
        cout<<d[l1][l2]<<endl;
    }
}