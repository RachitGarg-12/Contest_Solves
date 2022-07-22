#include <iostream>
#include <vector>
using namespace std;

void solve(){
        int m,n;
        cin>>n>>m;
        vector<bool> v(n,true);
        
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            v[x]=false;
        }
        vector<int> a,b;
        bool A=true,B;
        for(int i=1;i<=n;i++){
            if(v[i]==true && A==true){
                a.push_back(i);
                A=false;
                B=true;
            }
            else if(v[i]==true && B==true){
                b.push_back(i);
                A=true;
                B=false;
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
}

int main() {
    int t;cin>>t;
    while(t--){
       solve();
    }
    return 0;
}
	// your code goes here


