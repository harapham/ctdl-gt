#include<bits/stdc++.h>
using namespace std;
int k; char a[15],c;
void quaylui(int i){
    for(int j=a[i-1];j<=c;j++){
        a[i]=j;
        if(i==k){
            for(int l=1;l<=k;l++) cout<<a[l];
            cout<<endl;
        }
        else quaylui(i+1);
    }
}
main(){
    memset(a,'A',sizeof(a));
    cin>>c>>k;
    quaylui(1);
}