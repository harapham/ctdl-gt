#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int d[n];   // luu do dai cua tong bing phuong
		for(int i=1;i<=n;i++){
			d[i]=INT_MAX;
			for(int j=1;j<=sqrt(n);j++){
				if(i==j*j) d[i]=1;
				else if(i>j*j) d[i]=min(d[i],d[i-j*j]+1);
			}
		}
		cout<<d[n]<<endl;
	}
}