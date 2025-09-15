//Âå¹ÈP1011-³µÕ¾ 
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int a, n, m, x,b;
    cin >> a >> n >> m >> x;
    
    if (n == 1 || n == 2) 
	{
        cout << a << endl;
        return 0;
    }
    if (x == 1 || x == 2) 
	{
        cout << a << endl;
        return 0;
    }
    vector<int> on1(n+1), on2(n+1);
    on1[1] = 1; on2[1] = 0;
    on1[2] = 0; on2[2] = 1;
    for (int i = 3; i <= n; i++) 
	{
        on1[i] = on1[i-1] + on1[i-2];
        on2[i] = on2[i-1] + on2[i-2];
    }
    vector<int> s1(n+1), s2(n+1);
    s1[1] = on1[1];
    s2[1] = on2[1];
    for (int i = 2; i <= n; i++) 
	{
        s1[i] = s1[i-1] + on1[i];
        s2[i] = s2[i-1] + on2[i];
    }
    int total_n1 = a + s1[n-3] * a + s2[n-3] * b;
    b = (m - a - s1[n-3] * a) / s2[n-3];
    int ans = a + s1[x-2] * a + s2[x-2] * b;
    cout << ans << endl;
    return 0;
}
