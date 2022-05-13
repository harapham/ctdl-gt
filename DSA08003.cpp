#include<bits/stdc++.h>
using namespace std;
main(){
    int n,k;
    cin>>n;
    deque<int> q;
    string s;
    while(n--){
        cin>>s;
        if(s=="PUSHBACK"){
            cin>>k;
            q.push_back(k);
        }
        else if(s=="PUSHFRONT"){
            cin>>k;
            q.push_front(k);
        }
        else if(s=="POPBACK") {if(q.size()) q.pop_back();}
        else if(s=="POPFRONT") {if(q.size()) q.pop_front();}
        else if(s=="PRINTBACK"){
            if(q.empty()) cout<<"NONE";
            else cout<<q.back();
        }
        else{
            if(q.empty()) cout<<"NONE";
            else cout<<q.front();
        }
        cout<<endl;
    }
}