 //Rachit Garg
 #include<bits/stdc++.h>
 using namespace std;
 void read(vector<int> &a);
 void read(vector<string> &a);
 void read(vector<vector<int>> &a);
 void read(vector<pair<int, int>> &a);
 #define all(arr) arr.begin(), arr.end()
 #define fo(i, n) for (i = 0; i < n; i++)
 #define f1(i, n) for (i = 1; i <=n; i++)
 #define fa(it, a) for (auto it = a.begin(); it != a.end(); it++)
 #define pb push_back
 #define rfo(i, n) for (ll i = n - 1; i >= 0; i--)
 #define ll long long 
 #define asort(a) sort(a.begin(), a.end())
 #define dsort(a) sort(a.begin(), a.end(), greater<int>())
 #define min3(a, b, c) min(c, min(a, b))
 #define min4(a, b, c, d) min(d, min(c, min(a, b)))
 #define max3(a, b, c) max(c, max(a, b))
 #define max4(a, b, c, d) max(d, max(c, max(a, b)))
 #define mod 1000000007
 
 int gcd(int a, int b)
 {
     return b == 0 ? a : gcd(b, a % b);   
 }
 
 bool prime(int n){
  if(n<0){
   return false;
  }
  for(int i =2;i*i<n;i++){
   if(n%i == 0){
    return false;
   }
  }
  return true;
 }
 bool palindrome(int n){
  int r,sum = 0,k;
  k = n;
  while(n>0){
  r = n%10;
  sum = sum * 10 + r;
  n = n/10;
 }
  if( k == sum){
   return true;
  }
  else{
   return false;
  }
 }
 
 string isPalindrome(string S)
 { for (int i = 0; i < S.length() / 2; i++) {
         if (S[i] != S[S.length() - i - 1]) {
             return "No";
         }
     }
     return "Yes";
 }
 /////////////////////////////////////   
     
 int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     #ifndef ONLINE_JUDGE  
     freopen("inputf.in", "r", stdin);
     freopen("outputf.out", "w", stdout);
     #endif
  ll t;cin>>t;
     while(t--){ 
           ll i,k;
           ll n;cin>>n;ll a[n];ll c[n];
           fo(i,n){cin>>a[i];c[i]=a[i];}
           sort(c,c+n);bool d=true;
           fo(i,n){if(a[i]!=c[i]){d=false;}}
           if(d==true){cout<<0<<endl;continue;}
           if(a[n-2]>a[n-1] || a[n-2]<a[n-2]-a[n-1]){cout<<-1<<endl;continue;}
           cout<<n-2<<endl;
           for(ll j=n-3;j>=0;j--){
                   cout<<j+1<<" "<<n-1<<" "<<n<<endl;
                   }
             
    
 } 
  return 0;
 }
 
 ///////////////////////////////////////////
 void read(vector<int> & a)
 {
     for (int i = 0; i < a.size(); i++)
         cin >> a[i];
 }
 void read(vector<string> & a)
 {
     for (int i = 0; i < a.size(); i++) 
         cin >> a[i];
 }
 void read(vector<vector<int>> & a)
 {
     for (int i = 0; i < a.size(); i++)
         for (int j = 0; j < a[i].size(); j++)
             cin >> a[i][j];
 }
 void read(vector<pair<int, int>> & a)
 {
     for (int i = 0; i < a.size(); i++)
         cin >> a[i].first >> a[i].second;
 }