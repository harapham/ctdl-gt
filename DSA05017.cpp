#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],dl[n],dr[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			dl[i]=a[i]; dr[i]=a[i];
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>a[j]){
					dl[i]=max(dl[i],dl[j]+a[i]);
				}
			}
		}
		for(int i=n-2;i>=0;i--){
			for(int j=n-1;j>i;j--){
				if(a[i]>a[j]){
					dr[i]=max(dr[i],dr[j]+a[i]);
				}
			}
		}
		int res=0;
		for(int i=0;i<n;i++){
			res=max(res,dl[i]+dr[i]-a[i]);
		}
		cout<<res<<endl;
	}
}