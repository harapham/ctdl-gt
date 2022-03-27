#include<bits/stdc++.h>
using namespace std;
int n,k,a[10],b[10]={0};
vector<string> v;
long long kq=INT_MAX;
void quaylui(int i){
    for(int j=1;j<=k;j++){
        if(b[j]==0){
            a[i]=j;
            b[j]=1;
            if(i==k){
                long long l1=INT_MAX,l2=INT_MIN;
                for(auto x:v){
                    string s="";
                    for(int l=1;l<=k;l++){
                        s+=x[a[l]-1];
                    }
                    l1=min(l1,stoll(s));
                    l2=max(l2,stoll(s));
                }
                kq=min(kq,l2-l1);
            }
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    cin>>n>>k;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    quaylui(1);
    cout<<kq<<endl;
}