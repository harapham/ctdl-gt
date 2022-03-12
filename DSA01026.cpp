#include<bits/stdc++.h>
using namespace std;
int a[20],n;
void in(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
int kt8(){
    if(a[1]==6) return 0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i+1]&&a[i]==8) return 0;
    }
    return 1;
}
int kt6(){
    if(a[n]==8) return 0;
    for(int i=4;i<=n;i++){
        if(a[i-3]==a[i-2]&&a[i-2]==a[i-1]&&a[i-1]==a[i]&&a[i]==6) return 0;
    }
    return 1;
}
void quaylui(int i){
    for(int j=6;j<=8;j+=2){
        a[i]=j;
        if(i==n){
            if(kt6()&&kt8()) in();
        }
        else quaylui(i+1);
    }
}
main(){
    cin>>n;
    a[1]=8;
    quaylui(2);
}