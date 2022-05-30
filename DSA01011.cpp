#include<bits/stdc++.h>
using namespace std;
string s;
void sinh(){
    int i=s.size()-2;
    while(i>=0&&s[i]>=s[i+1]) i--;
    if(i>=0){
        int j=s.size()-1;
        while(s[i]>=s[j]) j--;
        swap(s[i],s[j]);
        reverse(s.begin()+i+1,s.end());
    }
    else s="BIGGEST";
}
main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n>>s;
        sinh();
        cout<<n<<" "<<s<<endl;
    }
}