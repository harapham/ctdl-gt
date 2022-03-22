#include<bits/stdc++.h>
using namespace std;
long nho(int m){
    int k=0,l=0;
    while(m>0){
        if(m%10==6) k=k+5*pow(10,l);
        else k=k+(m%10)*pow(10,l);
        m/=10; l++;
    }
    return k;
}
long lon(int m){
    int k=0,l=0;
    while(m>0){
        if(m%10==5) k=k+6*pow(10,l);
        else k=k+(m%10)*pow(10,l);
        m/=10; l++;
    }
    return k;
}
main(){
    long n,m;
    cin>>n>>m;
    cout<<nho(m)+nho(n)<<" "<<lon(m)+lon(n);
}