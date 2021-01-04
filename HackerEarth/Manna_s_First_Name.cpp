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
w(t)
{
    string s;
    cin >> s;
    int len = s.length();
    string s1 = "SUVO", s2 = "SUVOJIT";
    int cnt1 = 0, cnt2 = 0;
    int len1 = s1.length(), len2 = s2.length();    
    for(int i = 0; i <= len - len1; i++)
    {
        int j;
        for(j = 0; j < len1; j++)
        {
            if(s[i+j] != s1[j])
            break;
        }
        if(j == len1)
        {
            cnt1++;            
            j = 0;
        }
    }
    
    for(int i = 0; i <= len - len2; i++)
    {
        int j;
        for(j = 0; j < len2; j++)
        {
            if(s[i+j] != s2[j])
            break;
        }
        if(j == len2)
        {
            cnt2++;
            j = 0;
        }
    }

    if(cnt2 == 0)    
    cout << "SUVO = "<<cnt1 <<", "<< "SUVOJIT = " << cnt2 << endl;
    else
    {
        cout << "SUVO = "<<cnt1 - cnt2 <<", "<< "SUVOJIT = " << cnt2 << endl;
    }
    


}


// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}