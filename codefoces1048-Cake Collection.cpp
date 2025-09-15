//codefoces1048-Cake Collection
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
	{
        int n, m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) 
		{
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        long long ans = 0;
        int k = min(n, m);
        for (int i = 0; i < k; i++) 
		{
            ans += a[i] * (m - i);
        }
        cout << ans << endl;
    }
    return 0;
}
