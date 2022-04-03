#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok,k;
vector<string> v;
void xuly(){
    int i=k,r,d,s;
    while(i>0&&a[i]==1) i--;
    if(i>0){
        a[i]--;
        d=k-i+1; r=d/a[i]; s=d%a[i];
        k=i;
        if(r>0){
            while(r--){ k++; a[k]=a[i]; }
        }
        if(s>0) {k++;a[k]=s;}
        string d="(";
        for(int j=1;j<k;j++){
            d+=to_string(a[j])+' ';
        }
        d+=to_string(a[k])+')';
        v.push_back(d);
    }
    else ok=0;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        ok=1,k=1,a[1]=n;
        while(ok) xuly();
        cout<<v.size()+1<<endl;
        cout<<"("<<n<<") ";
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
        v.clear();
    }
}