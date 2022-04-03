#include<bits/stdc++.h>
using namespace std;
int n,a[10],c[10],ok[10]={0};
vector<string> chu,so;
void quayso(int k){
    for(int i=1;i<=n;i++){
        a[k]=i;
        if(k==n){
            string s="";
            for(int j=1;j<=n;j++) s+=to_string(a[j]);
            so.push_back(s);
        }
        else quayso(k+1);
    }
}
void quaychu(int k){
    for(int i=1;i<=n;i++){
        if(!ok[i]){
            c[k]=i; ok[i]=1;
            if(k==n){
                string s="";
                for(int j=1;j<=n;j++) s+=c[j]+'A'-1;
                chu.push_back(s);
            }
            else quaychu(k+1);
            ok[i]=0;
        }
    }
}
main(){
    cin>>n;
    quayso(1);quaychu(1);
    for(auto x:chu){
        for(auto y:so){
            cout<<x<<y<<endl;
        }
    }
}