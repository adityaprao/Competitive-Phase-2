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
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        cin >> arr[i][j];
    }

    int q;
    cin >> q;
    while(q--)
    {
        int x, y, v;
        int flag = 0;
        cin >> x >> y >> v;
        arr[x-1][y-1] = v;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                for(int k = 1; k + i < n && k + j < m; k++)
                {
                    if(arr[k+i][k+j] != arr[i][j])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if(flag == 1)
        cout << "No" << endl;
        else
        {
            cout << "Yes" << endl;
        }
        





        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = 0; j < m; j++)
        //     {
        //         for(int k = 1; i + k < n && j + k < m;)
        //         {                    
        //             if(arr[i+k][j+k] != arr[i][k])
        //             {                        
        //                 flag = 1;
        //                 cout << "No" << endl;
        //                 break;
        //             }
        //                 else
        //                 {
        //                     k++;
        //                     continue;
        //                 }
                        
        //         }
                

        //     }
        // }
        // if(flag == 1)
        // cout << "No" << endl;
        // else
        // {
        //     cout << "Yes" << endl;
        // }


        


    }
}


// Fu*k Ratings, I'm in Love with the Experience. 
return 0;
}