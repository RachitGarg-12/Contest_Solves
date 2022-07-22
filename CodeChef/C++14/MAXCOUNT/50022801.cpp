#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	map<int,int> mp;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int num[n];
	    
	    for(int j=0;j<n;j++){
	        cin>>num[j];
	        if(mp.find(num[j])!=mp.end())
	            mp[num[j]]+=1;
	        else
	            mp[num[j]]=1;
	    }
	    int max=mp[num[0]];
	    int ans=num[0];
	    for(int j=1;j<n;j++){
	        if(max<mp[num[j]]){
	            max=mp[num[j]];
	            ans=num[j];
	        }
	        else if(max==mp[num[j]]){
	            if(ans>num[j]){
	            max=mp[num[j]];
	            ans=num[j];
	            }
	        }
	    }
	    cout<<ans<<" "<<max<<endl;
	    mp.clear();
	}
	return 0;
}