#include <bits/stdc++.h>
using namespace std;
// #define pi (3.141592653589)
// #define mod 1e9+7
// #define int long long
// #define float double
// #define inf 1e18
// #define w(x) int x; cin >> x; while(x--)
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(c) cc.begin(), c.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rrep(i, n) for(int i=n-1;i>=0;i--)
// #define rep(i,n) for(int i=0;i<n;i++)
 #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// #define sz(arr)    sizeof(arr)/sizeof(arr[0])
// #define mod             1e9+7
// #define setbits(x)      __builtin_popcountll(x)
// #define COMPUTE_GCD(a, b) 		std :: __gcd((a), (b))
// #define COMPUTE_LCM(a, b) 		(a * ((b) / COMPUTE_GCD(a, b)))
// #define deb(x) cout << #x << "=" << x << endl;
// #define deb2(x, y) cout << #x << "=" << x << " " << #y << "=" << y << endl;


int32_t main()
{
fast
int mod = 1e9+7;
  int n, target;
  cin >> n >> target;
  vector<int> coins(n);
  for (int&v : coins) cin >> v;

  vector<vector<int>> dp(n+1,vector<int>(target+1,0));
  dp[0][0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= target; j++) {
      dp[i][j] = dp[i-1][j];
      int left = j-coins[i-1];
      if (left >= 0) {
	(dp[i][j] += dp[i][left]) %= mod;
      }
    }
  }
  cout << dp[n][target] << endl;




// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}