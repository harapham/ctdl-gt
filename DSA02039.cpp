#include<bits/stdc++.h>
using namespace std;
int a[50],n,sum;
vector<string> v;
void ql(int i){
    for(int j=n;j>=1;j--){
        if(j<=a[i-1]&&sum+j<=n){
            a[i]=j;
            sum+=j;
            if(sum==n){
                string s="(";
                for(int k=1;k<=i;k++) s+=to_string(a[k])+' ';
                s.erase(s.end()-1);
                s+=')';
                v.push_back(s);
            }
            else ql(i+1);
            sum-=j;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        v.clear(); sum=0; 
        a[0]=15;
        ql(1);
        cout<<v.size()<<endl;
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
    }
}
