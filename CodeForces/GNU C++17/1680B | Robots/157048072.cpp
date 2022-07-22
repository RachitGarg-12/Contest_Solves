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
       /* #ifndef ONLINE_JUDGE    
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif*/
      
        ll t;cin>>t;
        while(t--){
           ll m,n;cin>>n>>m;
           char a[n][m];
           fo(i,n){fo(j,m){cin>>a[i][j];}}
           if(a[0][0]=='R'){cout<<"YES"<<endl;continue;}
           ll r,c;
           fo(i,m){bool g=true;
           fo(j,n){
               
               //cout<<j<<" "<<i<<" "<<" "<<a[j][i]<<endl;
               if(a[j][i]=='R'){r=j;c=i;g=false;break;}}
               if(g==false){break;}}
           //cout<<r<<" "<<c<<endl;
           bool b=true;
           for(ll i=0;i<r;i++){
               for(ll j=c+1;j<m;j++){
                 if(a[i][j]=='R'){b=false;}
               }
           }
           if(b==false){cout<<"NO"<<endl;}
           else{cout<<"YES"<<endl;}
           
           
            
 
            }
            return 0;
    }
 
    ///////////////////////////////////////////
  
  