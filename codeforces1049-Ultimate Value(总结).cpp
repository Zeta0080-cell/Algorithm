//codeforces1049-Ultimate Value(×Ü½á) 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) 
	{
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) 
		{
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int cnt = (n + 1) / 2;
        ll ans = 0;
        for (int i = 0; i < cnt; i++) 
		{
            ans += a[n - 1 - i];
        }
        for (int i = 0; i < n - cnt; i++) 
		{
            ans -= a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
