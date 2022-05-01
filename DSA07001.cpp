#include<bits/stdc++.h>
using namespace std;
main(){
    string a;
    int st[205],top=-1,t;
    while(cin>>a){
        if(a=="push"){
            cin>>t;
            st[++top]=t;
        }
        else if(a=="pop") top--;
        else{
            if(top>=0){
                for(int i=0;i<=top;i++) cout<<st[i]<<" ";
                cout<<endl;
            }
            else cout<<"empty"<<endl;
        }
    }
}