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
 
    bool isPalindrome(string S)
    { for (int i = 0; i < S.length() / 2; i++) {
            if (S[i] != S[S.length() - i - 1]) {
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
       /* #ifndef ONLINE_JUDGE    
        freopen(input.txt, r, stdin); 
        freopen(output.txt, w, stdout);
        #endif */
      
        ll t;cin>>t;
        while(t--){
           ll n;cin>>n;
           map<ll,ll> m;
           ll a[n],b[n];vector<pair<ll,ll>> f;vector<pair<ll,ll>> s;
           fo(i,n){cin>>a[i];f.push_back({a[i],i});m[a[i]]++;}
           fo(i,n){cin>>b[i];m[b[i]]++;}
           fo(i,n){s.push_back({a[i],b[i]});}
           sort(s.begin(),s.end());
           /*if(n==2){
               if((a[1]>=a[0] && b[1]>=b[0])){cout<<0<<endl;continue;}
               else if((a[0]>=a[1] && b[0]>=b[1])){cout<<1<<endl;continue;}
               else if((a[0]>=a[1] && b[0]<b[1]) || (a[0]<a[1] && b[0]>=b[1])){cout<<-1<<endl;continue;}
               else{cout<<-1<<endl;continue;}
           }*/
           bool can=true;
           vector<pair<ll,ll>> ans;ll num=0;ll ne[n+1][2];ll in=1;
           fo(i,n){
               ll fi=m[a[i]];ll sec=m[b[i]];
               if(b[i]==s[i].second && a[i]==s[i].first){continue;}
               else{
                   for(ll k=i+1;k<n;k++){
                       if(b[k]==s[i].second && a[k]==s[i].first){
                        num++; ans.push_back({k+1,i+1});
                       ll now= a[k];
                       ll now2= b[k];
                       a[k] = a[i];
                       b[k] = b[i];
                       a[i] = now;
                       b[i] = now2;
                       }
                   }
               }
           }
           for( ll i=1;i<n;i++){
               if(s[i].second<s[i-1].second || s[i].first<s[i-1].first){can=false;}
           }
          /* for(auto i:f){ ne[in][1]=i.first;ne[in][2]=i.second;in++;}
           f1(i,n){
                 if(ne[i][2] > i){
                       if(b[i]>=b[ne[i][2]]){
                           ans.push_back({ne[i][2],i});
                           num++;  ll temp = b[i];
                           b[i]=b[ne[i][2]];
                           b[ne[i][2]]=temp;
                           f1(j,n){
                               if(ne[j][2]==i){ne[j][2]=ne[i][2];}
                           }
                           
                           }
                       else{can=false;break;}
                 }
        
           }*/
           if(can==false){cout<<-1<<endl;}
           else{
               cout<<num<<endl;
           for(auto i:ans){
               cout<<i.first<<" "<<i.second<<endl;
           }
           }
            }
            return 0;
        }