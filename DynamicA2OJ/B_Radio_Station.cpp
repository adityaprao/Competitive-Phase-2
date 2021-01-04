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
int n,m;
cin >> n >> m;
map<string, string> mp;

while(n--)
{
    string s1, s2, semi;
    cin >> s1 >> s2;
    semi.push_back(';');
    s2 = s2 + semi;
    mp[s2] = s1;
}

// for(auto it : mp)
// {
//     cout << it.first << " " << it.second << endl;
// }
while(m--)
{
    string s1, s2;
    cin >> s1 >> s2;
    // auto it = mp.find(s2);
     cout <<s1 << " " << s2 << " " <<  "#" << mp[s2] << endl;
}


// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}