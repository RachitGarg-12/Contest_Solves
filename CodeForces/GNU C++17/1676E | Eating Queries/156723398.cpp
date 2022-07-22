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
           ll n,q;cin>>n>>q;
           ll a[n];ll s=0;
           fo(i,n){cin>>a[i];s += a[i];}
           sort(a,a+n);
           ll b[q];ll c[n];ll cu=0;
           fo(i,n){c[i] = a[n-i-1] +cu; cu=c[i];}
           fo(i,q){cin>>b[i];
           if(b[i]>s){cout<<-1<<endl;continue;}
               /*else{ll d=0;
                   while(b[i]>c[d] && d<n){
                       if(d==n-1){if(b[i]>c[d]){cout<<-1<<endl;}
                       else{cout<<d+1<<endl;}
                       break;
                       }
                       else{
                           d++;if(b[i]<=c[d]){break;}}
                       }
                       cout<<d+1<<endl;
               }*/
            else{
                ll l=0,r=n-1;ll ans=0;
                while(l<=r){ 
                    ll m = l + (r - l) / 2;
                    //cout<<m<<" "<<l<<" "<<r<<" "<<c[m]<<endl;
                    if(r-l==1){if(c[l]>=b[i]){ans = l+1;break;}
                    if(c[r]>=b[i]){ans = r+1;break;}
                    ans=r+2;break;}
                    if(r==l){if(c[r]>=b[i]){ans = m+1;break;}
                    ans=r+2;break;
                    }
                    if(c[m]>b[i]){r=m-1;}
                    if(c[m]==b[i]){ans = m+1;break;}
                    if(c[m]<b[i]){l=m+1;}
                }
                cout<<ans<<endl;
            }
           }
           
           
            
 
            }
            return 0;
    }
 
    ///////////////////////////////////////////
  