#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
vector<string> v;
void quaylui(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            for(int i=1;i<=k;i++) cout<<v[a[i]]<<" ";
            cout<<endl;
        }
        else quaylui(i+1);
    }
}
main(){
    cin>>n>>k;
    string s;
    map<string,int> m;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }
    n=m.size();
    for(auto x:m) v.push_back(x.first);
    for(int i=1;i<=n;i++) a[i]=i;
    v.insert(v.begin()," ");
    quaylui(1);
}