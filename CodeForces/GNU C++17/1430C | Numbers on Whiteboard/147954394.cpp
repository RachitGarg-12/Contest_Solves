  //"THINK TWICE... CODE ONCE"//.
 #include <bits/stdc++.h>
using namespace std;
 typedef long long ll;
 #define fl(i,a,n) for(i=a;i<n;i++)
#define x first
#define y second
 
 
 void solve()
 {
  ll n,i,k;
  cin>>n;
  k=n;
 cout<<"2"<<endl;
for(i=n;i>1;i--)
{
  cout<<k<<" "<<i-1<<endl;
  k=ceil(double(2*double(i)-1)/2.0);
}
 
 }
 
 
int main()
 {
   
    ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  
 
   int TC = 1;
    cin >> TC;
 
    for(int tc = 1; tc <= TC; tc++)
     solve();
    return 0;
}