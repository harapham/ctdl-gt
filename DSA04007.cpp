#include<bits/stdc++.h>
using namespace std;
string tong(int k,string a,string b){
    if(b.size()>a.size()) swap(a,b);
    while(a.size()>b.size()) b='0'+b;
    int n=a.size()-1;
    int nho=0;
    string res="";
    while(n>=0){
        int kq=a[n]+b[n]-2*'0'+nho;
        nho=kq/k;
        kq=kq%k;
        res=to_string(kq)+res;
        n--;
    }
    if(nho) res=to_string(nho)+res;
    return res;
}
main(){
    int t;cin>>t;
    while(t--){
        int k;
        string a,b;cin>>k>>a>>b;
        cout<<tong(k,a,b)<<endl;
    }
}