#include<bits/stdc++.h>
using namespace std;
int c[9];
void in(){
    for(int i=0;i<8;i++){
        if(i==2||i==4) cout<<'/'<<c[i];
        else cout<<c[i];
    }
    cout<<endl;

}
void ngay(int n){
    for(int i=0;i<=2;i+=2){
        c[n]=i;
        if(n==7){
            int ng=c[0]*10+c[1];
            int th=c[2]*10+c[3];
            if(ng>0&&th>0&&th<12&&c[4]==2) in();
        }
        else ngay(n+1);
    }
}
main(){
    ngay(0);
}