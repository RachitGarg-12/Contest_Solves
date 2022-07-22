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
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        ll t;cin>>t;
        while(t--){ 
           ll j,k;
           // for(ll i=0;i<n;i++)
        ll n,m,x,w;
        cin>>n>>m;
        map <ll,ll> p;
        vector <pair<ll,ll>> v1;
        vector <ll> v2;
        for (ll i=0;i<m;i++){
            cin>>x>>w;
            p[x]=i+1;
            v1.push_back({w,x});
        }
        sort(v1.begin(),v1.end());
        ll sum=0;
        for (int i=0;i<2*n;i++){
            sum+=v1[i].first;
            v2.push_back(v1[i].second);
        }
        sort(v2.begin(),v2.end());
        cout<<sum<<endl;
        for (int i=0;i<n;i++){
            cout<<p[v2[i]]<<" "<<p[v2[2*n -i -1]]<<endl;   
        }
               
           cout<<endl;
    
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