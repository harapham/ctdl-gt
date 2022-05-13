#include<bits/stdc++.h>
using namespace std;
int a[105][105];
struct Node{
    int r,c;
    string p;
};
int btd(string s){
    reverse(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans+=(s[i]-'0')*(1<<i);
    }
    return ans;
}
string bth(string s){
    string k="";
    char h[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n=s.size(),end=n-1;
    while(n){
        n-=4;
        if(n<0) n=0;
        k+=h[btd(s.substr(n,end-n+1))];
        end=n-1;
    }
    reverse(k.begin(),k.end());
    return k;
}
main(){
    int n;cin>>n;
    string kq="";
    queue<Node> q;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
    q.push({0,0,to_string(a[0][0])});
    while(!q.empty()){
        Node ht=q.front();q.pop();
        int x=ht.r,y=ht.c;
        if(x==n-1&&y==n-1) kq=max(kq,ht.p); 
        if(x<n-1&&y<n-1){
            if(a[x+1][y]==a[x][y+1]){
                q.push({x+1,y,ht.p+to_string(a[x+1][y])});
                q.push({x,y+1,ht.p+to_string(a[x][y+1])});
            }
            else{
                if(a[x+1][y]==1) q.push({x+1,y,ht.p+to_string(a[x+1][y])});
                else q.push({x,y+1,ht.p+to_string(a[x][y+1])});
            }
        }
        else if(x==n-1&&y<n-1){
            q.push({x,y+1,ht.p+to_string(a[x][y+1])});
        }
        else if(x<n-1&&y==n-1) q.push({x+1,y,ht.p+to_string(a[x+1][y])});
    }
    cout<<bth(kq)<<endl;
    return 0;
}