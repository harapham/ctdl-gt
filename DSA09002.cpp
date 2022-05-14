#include<bits/stdc++.h>
using namespace std;
main(){
    int n;cin>>n;cin.ignore();
    int a=1,x;
    while(n--){
        string s;getline(cin,s);
        stringstream ss(s);
        string tok;
        vector<string> v;
        while(ss>>tok) v.push_back(tok);
        for(auto x:v){
            if(stoi(x)>a) cout<<a<<" "<<x<<endl;
        }
        a++;
    }
}
