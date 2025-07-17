//数据结构实训
#include<bits/stdc++.h>
#define LL long long
#define fi first
#define se second
#define mk make_pair
#define PLL pair<LL, LL>
#define PLI pair<LL, int>
#define PII pair<int, int>
#define SZ(x) ((int)x.size())
#define ull unsigned long long

using namespace std;

const int N = 1e6 + 7;
const int inf = 0x3f3f3f3f;
const LL INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9 + 7;
const double eps = 1e-8;
const double PI = acos(-1);

int n;
LL h[N], dp[N][2];

int main() 
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%lld", &h[i]), h[i]--;
    h[n + 1] = inf;
    dp[1][0] = h[1];
    dp[1][1] = min(h[1], h[2]);
    LL ans = dp[1][0];
    for(int i = 2; i <= n; i++) 
	{
        dp[i][0] = (dp[i - 1][1] * min(h[i - 1], h[i]) + h[i]) % mod;
        dp[i][1] = ((dp[i - 1][1] * min(h[i - 1], min(h[i], h[i + 1])) % mod) + min(h[i], h[i + 1])) % mod;
        ans = (ans + dp[i][0]) % mod;
    }
    printf("%lld\n", ans);
    return 0;
}

