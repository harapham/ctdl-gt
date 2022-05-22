#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;cin.ignore();
    int a[n+5][n+5];
    string s;
    int tok;
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        getline(cin,s);
        istringstream ss(s);
        while(ss>>tok){
            a[i][tok]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
