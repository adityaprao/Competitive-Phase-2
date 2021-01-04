#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
// #define int long long
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
#define setbits(x)      __builtin_popcountll(x)
#define COMPUTE_GCD(a, b) 		std :: __gcd((a), (b))
#define COMPUTE_LCM(a, b) 		(a * ((b) / COMPUTE_GCD(a, b)))
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << " " << #y << "=" << y << endl;


int32_t main()
{
fast
int n, x;
cin >> n >> x;

vector<int> price(n+1), pages(n+1);
for(int i = 1; i <= n; i++)
{
    cin >> price[i];
}
for(int i = 1; i <= n; i++)
{
    cin >> pages[i];
}
int dp[n+1][x+1];

for(int i = 0; i <= n; i++)
{
    for(int money = 0; money <= x; money++)
    {
        if(money == 0 || i == 0)
        {
            dp[i][money] = 0;
        }
        else
        {
            int op1 = (i==1) ? 0 : dp[i-1][money]; // not buying any from the 1st ith book
            int op2 = (money < price[i]) ? 0 : pages[i] + dp[i-1][money - price[i]];
            dp[i][money] = max(op1, op2);
        }
        
    }
}
cout << dp[n][x];



// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}