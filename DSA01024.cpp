#include<bits/stdc++.h>
using namespace std;
int n,k,ok;
string s;
int b[35];
vector<string> a;
void sx(){
    int i=k;
    while(i>0&&b[i]==n-k+i) i--;
    if(i>0){
        b[i]++;
        for(int j=i+1;j<=k;j++) b[j]=b[i]+j-i;
    }
    else ok=0;
}
main(){
    cin>>n>>k;
    cin.ignore();
    map<string,int> mp;
    for(int i=0;i<n;i++){
        cin>>s;
        mp[s]++;
    }
    for(auto x:mp){
        a.push_back(x.first);
    }
    ok=1;
    n=a.size();
    a.insert(a.begin(),1,".");
    for(int i=1;i<=n;i++) b[i]=i;
    while(ok){
        for(int i=1;i<=k;i++) cout<<a[b[i]]<<" ";
        cout<<endl;
        sx();
    }
}