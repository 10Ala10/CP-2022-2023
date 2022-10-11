#include<bits/stdc++.h>
using  namespace  std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll             long long int
#define ulli           unsigned long long int
#define li             long int
#define ff(i,a,b)      for(int i=a;i<b;++i)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define LeoKane        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             "\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define vl             vector<ll>
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;++i) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0;
#define mi             map<int,int>
#define ml             map<ll,ll>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define se second
#define f first
#define pb push_back
#define all(x) x.begin(),x.end()
#define sortt(x) sort(all(x))
#define lowbit(x) (x&-x)
#define pii pair<int,int>
//vector<vector<int>>a(n, vector<int>(m));
//cout<<fixed<<setprecision(2);
const int N=1e5;
using namespace std;
int main(){
    LeoKane;
   //freopen("a.txt","r",stdin);
   ll dp[N+5];
   int t;cin>>t;
   while(t--)
   {
      int n,m;cin>>n>>m;
   dp[0]=0;dp[1]=1;
   for(ll i=2;i<=n;++i)
   {
       dp[i]=dp[i-1]+dp[i-2];
       dp[i]=dp[i]%m;
   }
   cout<<dp[n]<<nl;

   }


   return 0;

}







