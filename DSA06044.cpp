#include<bits/stdc++.h>
using namespace std;
main(){
    int n,a; cin>>n;
    vector<int> chan,le;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(i%2) le.push_back(a);
        else chan.push_back(a);
    }
    sort(chan.begin(),chan.end(),greater<int>());
    sort(le.begin(),le.end());
    for(int i=0;i<chan.size();i++){
        cout<<le[i]<<" "<<chan[i]<<" ";
    }
    if(le.size()>chan.size()) cout<<le[le.size()-1];
    cout<<endl;
}