#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	int n,i,cnt=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int speed[n]={0};
        speed[0]=a[0];
        for(i=1;i<n;i++){
            speed[i] = min(a[i],speed[i-1]);
        }
        for(i=0;i<n;i++){
            if(a[i]==speed[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
	return 0;
}
