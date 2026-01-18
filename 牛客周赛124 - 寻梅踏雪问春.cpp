// 牛客周赛124 - 寻梅踏雪问春 
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sqdist(ll x1, ll y1, ll x2, ll y2) 
{
    ll dx = x1 - x2;
    ll dy = y1 - y2;
    return dx * dx + dy * dy;
}

int main() 
{
    ll a, b, c, d, e, f;
    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
    
    ll L1 = sqdist(a, b, c, d);
    ll L2 = sqdist(c, d, e, f);
    ll L3 = sqdist(e, f, a, b);
    
    if (L1 > 0 && L1 == L2 && L2 == L3) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
    
    return 0;
}  
