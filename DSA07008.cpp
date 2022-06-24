#include<bits/stdc++.h>
using namespace std;
/* 
Nếu s[i] là dấu '(' thì push vào stack
Nếu s[i] là dấu ')' thì xuất hết phần tử top của stack bao giờ gặp '(' thì dừng
Nếu s[i] là chữ cái thì in ra màm hình
Nếu s[i] là toán tử thì xét độ ưu tiên với toán tử của phần tử top, nếu s[i]<=top và
top là toán tử thì xuất ra màn hình, sau đó mới push toán tử hiện tại vào stack
*/
bool check(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%' || x=='^'){
		return true;
	}
	return false;
}
int main(){
	int t; cin>>t;
	while(t--){
		map<char, int> pri;
        pri['+'] = pri['-'] = 1;
        pri['*'] = pri['/'] = pri['%'] = 2;
        pri['^'] = 3;
		string s; cin>>s;
		stack<char> st;
		string res="";
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				st.push(s[i]);
			}
			else if(s[i]==')'){
				while(!st.empty() && st.top()!='('){
					res+=st.top(); st.pop();
				}
				st.pop();
			}
			else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
				res+=s[i];
			}
			else{
				while(!st.empty() && check(s[i]) && pri[s[i]]<=pri[st.top()]){
					res+=st.top(); st.pop();
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			if(check(st.top())){	
			    res+=st.top(); st.pop();
			}
			else st.pop();
		}
		cout<<res<<endl;
	}
}