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
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << " " << #y << "=" << y << endl;


int32_t main()
{
fast
int n, k;
cin >> n >> k;
vector<int> wts(n), dp(n, inf);
for(int i = 0; i < n; i++)
{
    cin >> wts[i];
}

dp[0] = 0;

for(int i = 0; i < n; i++)
{
    for(int j = 1 + i; j <= k + i; j++)
    {
        if(j < n)
        dp[j] = min( abs(wts[i] - wts[j]) + dp[i], dp[j] );
    }
}
cout << dp[n-1];



// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}