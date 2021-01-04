#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v1(n);
        for(int i = 0; i < n; i++)
        cin >> v1[i];
        
        int left = 0, right=n-1;
        vector<int> v2(n);
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
                v2[i] = v1[left++];
            else
                v2[i] = v1[right--];
        }

        for(int i = 0; i < n; i++)
        cout << v2[i] <<" ";

        cout <<"\n";           
            

    }
}