//codeforces1049-shift sort(×Ü½á) 
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
	{
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = count(s.begin(), s.end(), '0');
        int ans = 0;
        for (int i = 0; i < cnt0; i++) 
		{
            if (s[i] == '1') 
			{
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
