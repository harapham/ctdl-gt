#include<bits/stdc++.h>
using namespace std;
int c[20][20],a[20],b[20]={0},n,cost=0,fopt=1e9,cmin=1e9;
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(b[j]==0){
            a[i]=j;
            b[j]=1;
            cost+=c[a[i-1]][a[i]];
            if(i==n){
                fopt=min(fopt,cost);
            }
            else if(cost+cmin*(n-i+1)<fopt) quaylui(i+1);
            cost-=c[a[i-1]][a[i]];
            b[j]=0;
        }
    }
}
int dem(string s1,string s2){
    int i=0,j=0,d=0;
    while(i<s1.size()&&j<s2.size()){
        if(s1[i]==s2[j]){d++;i++;j++;}
        else if(s1[i]<s2[j]) i++;
        else j++;
    }
    return d;
}
main(){
    string s;
    vector<string> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++){ 
        if(i==j) c[i][j]=1e9;
        else c[i][j]=dem(v[i-1],v[j-1]);
        cmin=min(cmin,c[i][j]);
    }
    quaylui(1);
    cout<<fopt<<endl;
}