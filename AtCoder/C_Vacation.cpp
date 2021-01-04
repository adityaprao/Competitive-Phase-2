#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define int long long
#define float double
#define inf 1e18
#define w(x) int x; cin >> x; while(x--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) cc.begin(), c.end()
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define sz(arr)    sizeof(arr)/sizeof(arr[0])
#define setbits(x)      __builtin_popcountll(x)
#define COMPUTE_GCD(a, b) 		std :: __gcd((a), (b))
#define COMPUTE_LCM(a, b) 		(a * ((b) / COMPUTE_GCD(a, b)))
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << " " << #y << "=" << y << endl;


int32_t main()
{
fast
int n;
cin >> n;
int a[n][3];
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < 3; j++)
        cin >> a[i][j];
}

int dp[n][3];
dp[0][0] = a[0][0];
dp[0][1] = a[0][1];
dp[0][2] = a[0][2];

for(int i = 1; i < n; i++)
{
    dp[i][0] = a[i][0] + max(dp[i-1][1], dp[i-1][2]);
    dp[i][1] = a[i][1] + max(dp[i-1][0], dp[i-1][2]);
    dp[i][2] = a[i][2] + max(dp[i-1][1], dp[i-1][0]);
    
}
int ans = max3(dp[n-1][0], dp[n-1][1], dp[n-1][2]);

cout << ans;


// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}