#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        long long a;
        long long max=LONG_LONG_MIN,min=LONG_LONG_MAX;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>max) max=a;
        }
        for(int i=0;i<m;i++){
            cin>>a;
            if(a<min) min=a;
        }
        cout<<min*max<<endl;
    }
}