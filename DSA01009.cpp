#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[105];
void sinh(){
    int i=n;
    while(i>0&&a[i]){a[i]=0;i--;}
    if(i>0) a[i]=1;
    else ok=0;
}
int kt(){
    int d=0;
    for(int i=1;i<=n;i++){
        if(!a[i]) d++;
        else d=0;
        if(d==k&&(a[i+1]||i==n)) return 1;
    }
    return 0;
}
vector<string>s;
main(){
    cin>>n>>k;
    ok=1;
    memset(a,0,sizeof(a));
    while(ok){
        if(kt()){
           string kq={};
                for(int j=1;j<=n;j++){
                    if(a[j]) kq+='B';
                    else kq+='A';
                }
                s.push_back(kq); 
        }
        sinh();
    }
    cout<<s.size()<<endl;
    for(auto x:s) cout<<x<<endl;
}