#include<bits/stdc++.h>
using namespace std;

string cong(string s1,string s2){
    string s3="";
    if(s1.size()<s2.size()) swap(s1,s2);
    while(s1.size()>s2.size()) s2='0'+s2;
    int nho=0,n=s1.size()-1;
    while(n>=0){
        int kq=s1[n]+s2[n]-2*'0'+nho;
        nho=kq/10;
        kq=kq%10;
        s3=to_string(kq)+s3;
        n--;
    }
    if(nho) s3=to_string(nho)+s3;
    return s3;
}
string nhan(string s1,string s2){
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int kq[s1.size()+s2.size()+5];
    memset(kq,0,sizeof(kq));
    for(int i=0;i<s1.size();i++){
        int nho=0;
        for(int j=0;j<=s2.size();j++){
            int t=s1[i]*s2[j]+nho;
            nho=t/10; t=t%10;
            kq[i+j]+=t;
        }
    }
    string res="";
    for(int i=0;i<s1.size()+s2.size()-2;i++){
        kq[i+1]+=kq[i]/10;
        res=to_string(kq[i]%10)+res;
    }
    res=to_string(kq[s1.size()+s2.size()-1])+res;
    return res;
}
main(){
    string ca[105];
    ca[0]="1";ca[1]="1";
    for(int i=2;i<=100;i++){
        string tmp="0";
        for(int j=0;j<i;j++){
            tmp=cong(tmp,nhan(ca[j],ca[i-j-1]));
        }
        ca[i]=tmp;
    }
    for(int i=0;i<7;i++) cout<<ca[i]<<endl;
    /* int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<ca[n]<<endl;
    } */
}
#include<bits/stdc++.h>
using namespace std;
int n, s[200], a[200], len;
void add(int x, int m){
    for (int i = 2; i * i <= x; i++){
        while (x % i == 0){
            s[i] += m;
            x /= i;
        }
    }
    if (x != 1)  s[x] += m;
}
void mul(int x){
    len += 5;
    for (int i = 0; i < len; i++)
        a[i] *= x;
    for (int i = 0; i < len; i++){
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
    while (len > 0 && !a[len - 1])
        len--;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        memset(a, 0, sizeof(a));
        memset(s, 0, sizeof(s));
        for (int i = 1; i <= n; i++){
        	add(2 * n - i + 1, 1);
		}
        for (int i = 1; i <= n + 1; i++){
        	 add(i, -1);
		}
        a[0] = len = 1;
        for (int i = 1; i < 200; i++){
            while (s[i]--){
            	mul(i);
			}
        }
        for (int i = len - 1; i >= 0; i--){
        	cout<<a[i];
		}
        cout << endl;
    }
}