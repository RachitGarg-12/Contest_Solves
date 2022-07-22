    //Rachit Garg
    #include<bits/stdc++.h>
    using namespace std;
    void read(vector<int> &a);
    void read(vector<string> &a);
    void read(vector<vector<int>> &a);
    void read(vector<pair<int, int>> &a);
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
    #define mod 1000000007

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
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        ll t;cin>>t;
        while(t--){ 
           ll n;cin>>n;
           vector<ll> a(n);ll c=0;
           fo(i,n){cin>>a[i];}
           vector<ll> msbp(32);
           fo(i,n){
              ll p = (ll)log2(a[i]);
              msbp[p]++;
           }
          
           fo(i,32){
              c += ((msbp[i]-1)*msbp[i])/2;
           }
           cout<<c<<endl;
           
        
    } 
        return 0;
    }

    ///////////////////////////////////////////
    void read(vector<ll> & a)
    {
        for (ll i = 0; i < a.size(); i++)
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