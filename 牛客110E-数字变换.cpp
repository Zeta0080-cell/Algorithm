//Å£¿Í110E-Êý×Ö±ä»»
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    int T;
    if (!(cin >> T)) return 0;
    while (T--) 
    {
        string s;
        cin >> s;
        int n = (int)s.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) 
        {
            prefix[i+1] = (prefix[i] + (s[i] - '0')) % 9;
        }
        vector<ll> cnt(9, 0);
        ll ans = 0;
        for (int i = 0; i <= n; ++i) 
        {
            int cur = prefix[i];
            for (int r = 0; r < 9; ++r) 
            {
                int val = (cur - r + 9) % 9; 
                int root = (val == 0 ? 9 : val); 
                ans += cnt[r] * 1LL * root;
            }
            cnt[cur] ++;
        }
        ll zero_subs = 0;
        ll len = 0;
        for (char c : s) 
        {
            if (c == '0') ++len;
            else {
                if (len > 0) 
                {
                    zero_subs += len * (len + 1) / 2;
                    len = 0;
                }
            }
        }
        if (len > 0) zero_subs += len * (len + 1) / 2;
        ans -= 9LL * zero_subs;
        cout << ans << '\n';
    }
    return 0;
}
 
