     //Rachit Garg
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long 
    #define all(arr) arr.begin(), arr.end()
    #define ce  cout<<endl
    #define fo(i, n) for (ll i = 0; i < n; i++)
    #define f1(i, n) for (ll i = 1; i <=n; i++)
    #define fab(a,b) for (ll i = a; i < b; i++)
    #define rfo(i, n) for (ll i = n - 1; i >= 0; i--)
    #define pb push_back
    #define asort(a) sort(a.begin(), a.end())
    #define dsort(a) sort(a.begin(), a.end(), greater<int>())
    #define min3(a, b, c) min(c, min(a, b))
    #define min4(a, b, c, d) min(d, min(c, min(a, b)))
    #define max3(a, b, c) max(c, max(a, b))
    #define max4(a, b, c, d) max(d, max(c, max(a, b)))
    #define mod 998244353
    typedef unsigned long long ull;
    typedef long double lld;
    #ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
    #else
    #define debug(x)
    #endif
    
    void _print(ll t) {cerr << t;}
    void _print(int t) {cerr << t;}
    void _print(string t) {cerr << t;}
    void _print(char t) {cerr << t;}
     void _print(lld t) {cerr << t;}
    void _print(double t) {cerr << t;}
    void _print(ull t) {cerr << t;}
    
    template <class T, class V> void _print(pair <T, V> p);
    template <class T> void _print(vector <T> v);
    template <class T> void _print(set <T> v);
    template <class T, class V> void _print(map <T, V> v);
    template <class T> void _print(multiset <T> v);
    template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
    template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
    ll lcm(ll  a, ll b)
    {
        return (a/__gcd(a,b))*b ;
    }
    
    bool ch(string s,string a){
        ll pos=0;
        ll n=s.length();ll o=a.length();
        for(ll i=0;i<n;i++){
            if(pos==o){pos=0;}
            if(a[pos]!=s[i]){return false;}
            pos++;
        }
        return true;
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
 
    bool isPalindrome(string S)
    {  ll len=S.length();
        for (int i = 0; i < len/ 2; i++) {
            if (S[i] != S[len - i - 1]) {
                return false;
            }
        }
        return true;
    }
    pair<ll,ll> powg2(ll n){
    ll i,ans;
        for(i=1;i<=32;i++){
            ll m = n*((ll)1<<i);
           if(m>32768){ans=n*((ll)1<<(i-1));break;}
        }
        return {ans,i-1};
        
    } 
 
    /////////////////////////////////////   
        
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        // #ifndef ONLINE_JUDGE    
        // freopen("input.txt", "r", stdin); 
        // freopen("output.txt", "w", stdout);
        // freopen("error.txt", "w", stderr);
        // #endif 
      
        ll t;cin>>t;
        while(t--){
          string s;cin>>s;
          set<string> rect;
          ll x;cin>>x;
          ll pals = 0;ll min_inc = x%60;ll hr_inc = x/60;
          bool b=false;
          swap(s[3],s[2]);swap(s[3],s[4]);s.pop_back();
          while(true){
          if(rect.find(s) != rect.end()){
             debug(s);break;
           }
            
           ll hour=(s[0]-'0')*10+s[1]-'0';
           ll minu=(s[2]-'0')*10+(s[3]-'0');
           
            hour += hr_inc;minu += min_inc;
           if(minu >= 60){ minu %= 60;hour++;}
            rect.insert(s);hour %= 24;
         
          string hours = to_string(hour);string mins = to_string(minu);
          if(hour < 10){hours = "0" + hours;}
          if(minu < 10){ mins = "0" + mins;}
          if(isPalindrome(s)){
              pals++;
           }
           s = hours+ mins;
           }
         cout<<pals<<endl; 
     }
            return 0;
        }