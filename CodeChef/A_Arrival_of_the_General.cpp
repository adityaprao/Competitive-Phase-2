#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1e9+7
#define int long long
#define float double
#define inf 1e18
#define w(x) int x; cin >> x; while(x--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) cc.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define sz(arr)    sizeof(arr)/sizeof(arr[0])
#define mod             1e9+7
#define setbits(x)      __builtin_popcountll(x)
#define COMPUTE_GCD(a, b) 		std :: __gcd((a), (b))
#define COMPUTE_LCM(a, b) 		(a * ((b) / COMPUTE_GCD(a, b)))


int32_t main()
{
fast
int n;
cin>>n;
vector<int>v(n);
int mx = INT_MIN, mn = INT_MAX, mx_close = INT_MAX, mn_far = INT_MIN;
vector<int> dis(2);

for(int i = 0; i < n; i++)
{
    cin >> v[i];
    mx = max(mx, v[i]);    
    mn = min(mn, v[i]);
}
// cout << mx << " " << mn;
int mx_dupli = 0;
int mn_dupli = 0;

for(int i=0; i<n; i++)
{
    if(v[i] == mx)
    {
       mx_close = min(mx_close, i);
       dis[0] = mx_close;
       mx_dupli++;
    }    
    else if(v[i] == mn)
    {
        mn_far = max(mn_far, i);
        dis[1] = mn_far;
        mn_dupli++;
    }        
}
mx_dupli--, mn_dupli--;

if(mx_dupli + 1 == n)
{
    cout << 0;
    return 0;


}
int ans = 0;
ans += dis[0];
if(dis[0] > dis[1])
ans += n - 2 - dis[1];
else
{
    ans += n - 1 - dis[1];
}

cout << ans;




// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}