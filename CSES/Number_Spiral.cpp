#include <bits/stdc++.h>
using namespace std;
 
#define ll               long long
#define inf            1e18
#define w(x)          int x; cin>>x; while(x--)
#define endl          "\n"
#define boostUP   ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fsr(i,n)      for(int i=0;i<n;i++)
#define fcr(i,a,b)   for(int i=a;i<b;i++)
#define pb             push_back
#define sz(arr)      sizeof(arr)/sizeof(arr[0])
 
 
 
 
int main(void)
{
    boostUP;
    w(t)
    {
 
        ll y,x;
        cin >> y>> x;
 
        ll z= max(y,x);
        ll z2 = (z-1)*(z-1),ans;
 
        if(z%2)
        {
 
            if(y == z)
            {
                ans = z2+x;
 
            }
            else{
                ans = z2+2*x-y;
            }
 
        }
        else
        {
            if(x == z)
            {
                ans = z2+y;
 
            }
            else
            {
                ans = z2+2*z-x;
            }
        }
        cout<<ans<<endl;
    }
 
 
 
 
 
 
    return 0;
 
}