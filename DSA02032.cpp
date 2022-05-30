#include<bits/stdc++.h>
using namespace std;
int a[105],x[105],n,s,sum,d;
vector<string> v;
void ql(int i){
    for(int j=1;j<=n;j++){
        if(x[i-1]<=a[j]&&sum+a[j]<=s){
            x[i]=a[j];
            sum+=a[j];
            if(sum==s){
                d++;
                string kq="{";
                for(int k=1;k<=i;k++) kq+=to_string(x[k])+' ';
                kq.erase(kq.end()-1);
                kq+='}';
                v.push_back(kq);
            }
            else ql(i+1);
            sum-=a[j];
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>s;
        for(int i=1;i<=n;i++) cin>>a[i];
        v.clear(); sum=0;d=0;
        ql(1);
        if(d==0) cout<<-1<<endl;
        else{
            cout<<d<<" ";
            for(auto x:v) cout<<x<<" ";
            cout<<endl;
        }
    }
}