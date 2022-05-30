#include<bits/stdc++.h>
using namespace std;
int n,a[1001],ok;
void sinh(){
	int i=n;
    while(i>0&&a[i]){a[i]=0;i--;}
    if(i>0) a[i]=1;
    else ok=0;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
        ok=1;
        memset(a,0,sizeof(a));
		while(ok){
            for(int i=1;i<=n;i++){
                int res=a[i]^a[i-1];
                cout<<res;
            }
            cout<<" ";
            sinh();
        }
        cout<<endl;
	}
}