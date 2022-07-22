#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s,s1;
	    stack<char> s2;
	    int z;
	    cin>>s;
	    z= s.length();
	    for(int i=0; i<z; i++){
	        if(s[i]=='(')
	        continue;
	        else
	        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
	        s2.push(s[i]);
	        else if(s[i]==')'){
	        s1+=s2.top();
	        s2.pop();}
	        else
	        s1+=s[i];
	    }
	    cout<<s1<<endl;
	}
	return 0;
}
