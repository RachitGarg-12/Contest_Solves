#include <iostream>
#include <map>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int>arr(200, 0);
	    for(int i=0; i<s.length(); i++){
	        arr[s[i]+0]+=1;
	    }
	    int count=0;
	    for(int i=0;i<200;i++)
	    {
	        if(arr[i]!=0)
	        {
	            count+=(arr[i]/2)+(arr[i]%2);
	        }
	    }
	    cout<<count<<endl;
    }
	
	return 0;
}
