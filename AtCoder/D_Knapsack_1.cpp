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

// int t[100002][102];

// int Knapsack(int w[], int v[], int W, int N) // returns the maximum value possible
// {
//     if(N == 0 || W == 0)
//     {
//         t[W][N] = 0;
//         return t[W][N];
//     }
//     if(t[W][N] != -1)
//     {
//         return t[W][N];
//     }
//     if(w[N - 1] > W)
//     {
//         t[W][N] = Knapsack(w, v, W, N - 1);
//         return t[W][N];
//     }
//     if(w[N - 1] < W || w[N - 1] == W)
//     {
//         t[W][N] = max(v[N - 1] + Knapsack(w, v, W - w[N - 1], N - 1), Knapsack(w, v, W, N - 1));
//         return t[W][N];
//     }
        
    

// }



int32_t main()
{
fast
// int N, W;
// cin >> N >> W;
// int w[N], v[N];
// for(int i = 0; i < W; i++)
// {
//     for(int j = 0; j < N; j++)
//     {
//         t[i][j] = -1;
//     }
// }
// for(int i = 0; i < N; i++)
// {
//     cin >> w[i] >> v[i];
// }
// int ans = Knapsack(w, v, W, N);
// cout << ans << endl;




int n, w;
cin >> n >> w;
vector<int> wts(n + 1), values(n+1);

for(int i = 1; i <= n; i++)
{
    cin >> wts[i] >> values[i];
}

int dp[n+1][w+1];
for(int i = 0; i <= n; i++)
{
    for(int target_wt = 0; target_wt <= w; target_wt++)
    {
        if(i == 0 || target_wt == 0)
        {
            dp[i][target_wt] = 0;
        }
        else
        {
            int op1 =  (i==1) ? 0 : dp[i-1][target_wt];
            int op2 = (target_wt< wts[i]) ? 0 : dp[i-1][target_wt-wts[i]] + values[i];
            dp[i][target_wt] = max(op1, op2);
        }
        
    }
}
cout << dp[n][w];


// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}