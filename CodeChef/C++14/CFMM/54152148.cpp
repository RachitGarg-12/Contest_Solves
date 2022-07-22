#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[6]={0,0,0,0,0,0};
        while(n--){
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++){
                if(s[i]=='c') arr[0]++;
                else if(s[i]=='o') arr[1]++;
                else if(s[i]=='d') arr[2]++;
                else if(s[i]=='e') arr[3]++;
                else if(s[i]=='h') arr[4]++;
                else if(s[i]=='f') arr[5]++;
            }
        }
        arr[0]= arr[0]/2;
        arr[3]= arr[3]/2;
        sort(arr,arr+6);
        cout<<arr[0]<<endl;
    }
	
	return 0;
}
