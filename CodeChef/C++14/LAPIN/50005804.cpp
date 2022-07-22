#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        int l=s.length();
        int larr[26]={0};
        int rarr[26]={0};
        int x=0;
        for(int i=0;i<l/2;i++){
            x=s[i]-'a';
            larr[x]++;
        }
        for(int i=(l+1)/2;i<l;i++){
            x=s[i]-'a';
            rarr[x]++;
        }
        int ans=0;
        
        for(int i=0;i<26;i++){
            if(larr[i]!=rarr[i]){
                ans=1;
            }
        }
        if(ans==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	
	return 0;
}
