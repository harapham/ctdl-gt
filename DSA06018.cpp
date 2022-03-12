#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int> se;
        int a,min=INT_MAX,max=0;
        for(int i=0;i<n;i++){
            cin>>a;
            se.insert(a);
            if(a>max) max=a;
            if(a<min) min=a;
        }
        cout<<max-min+1-se.size()<<endl;
    }
}