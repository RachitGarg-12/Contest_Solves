#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int arr[10];
        int min=9,k;
        for(int i=0;i<10;i++){
            cin>>arr[i];
            if(min>arr[i] && i!=0){
                min=arr[i];
                k=i;
            }
        }
        if(arr[0]<min){
            min=arr[0];
            k=0;
            cout<<1;
           
        }
        for(int i=0;i<=min;i++){
            cout<<k;
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
