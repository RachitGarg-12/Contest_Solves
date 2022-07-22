#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
#define ordered_set tree<int, null_type,greater_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int        
#define nl "\n"
#define pb push_back
#define ppb pop_back
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define mod1 1000000007
#define uo cout<<"YES\n"
#define no cout<<"NO\n"
#define vv vector<vector<ll>>
#define v vector<ll>
#define tt int TESTCASE;cin>>TESTCASE;while(TESTCASE--)
#define f(i,a,b) for(ll i = (a); i <= (b); i++)
#define fr(j,a,b) for(ll j = (a); i >= (b); i--)
void p_map(map<ll,ll>&mp){
  for(auto &val:mp)cout<<val.first<<" "<<val.second;
  cout<<nl;
}
void print(v &vect,ll len){
  f(i,0,len-1)cout<<vect[i]<<" ";
  cout<<nl;
}
 
ll power(ll a,ll b){ //Finding a power b..
 ll ans=1;
  while(b){
    
     if(b&1){
        ans=a*ans;
     }
     b>>=1;
     a=a*a;
  }
  return ans;
}
ll find_gcd(ll a,ll b){ //Taking b as divisor and a as dividend
  if( b==0 ) return a;  
  return find_gcd( b , a%b ); 
}
////--------------------------------**************--------------------------------------------///
// observe when your answer lie in a range then think about  BINARY SEARCH  or if ur greedy method 
// fail then also think about binary search ..  :)
 
bool is_possible(v &cor,v &vel ,ll n,double time){
  double l=-1e18,r=1e18;
    f(i,0,n-1){
      double temp1=(double)cor[i]-(vel[i]*time);
      double temp2=(double)cor[i]+(vel[i]*time);
      
      if(r>=temp1 && l<=temp2){
        l=max(l,temp1);r=min(r,temp2);
      }
      else return false; 
    }
    
    return true;
}
 
 
 
void solve(){
 double eps=1e-6;
 ll n;cin>>n;
 v cor(n),vel(n);
 f(i,0,n-1)cin>>cor[i];
 f(i,0,n-1)cin>>vel[i];
 
 if(n==1){
   cout<<0.0<<nl;
   return ;
 }
 // binary search part 
 
 
 long double lo=0.0,hi=1e14,ans=-1;
 eps=1e-9;
 
 cout<<setprecision(10) ;
 while(hi-lo>eps){
   long double mid= (lo+hi)/2.0;
   // cout << lo <<" "<< hi <<" " << hi - lo << endl ;
   // if(is_possible(cor,vel,n,mid)){
   //   ans=mid;hi=mid-eps;
   // } else lo=mid+eps;
   if(is_possible(cor,vel,n,mid)){
     ans=mid;hi=mid;
   } else lo=mid;
 }
 
 cout<<setprecision(10)<<ans<<nl;
 
 
 return ;
}
 
/*------------------------------------- IT'S MY WORLD :)) -----------------------------------------*/
int main() {
 ios_base::sync_with_stdio(false);
 cout.tie(NULL); cin.tie(NULL);
//      tt{
     solve();
        //}
        return 0;
}