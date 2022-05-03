#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,k,a;cin>>n;
        queue<int> q;
        while(n--){
            cin>>k;
            if(k==1) cout<<q.size()<<endl;
            else if(k==2){
                if(q.empty()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else if(k==3){
                cin>>a; q.push(a);
            }
            else if(k==4){
                if(!q.empty()) q.pop();
            }
            else if(k==5){
                if(!q.empty()) cout<<q.front()<<endl;
                else cout<<-1<<endl;
            }
            else{
                if(!q.empty()) cout<<q.back()<<endl;
                else cout<<-1<<endl;
            }
        }
    }
}