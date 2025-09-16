//codeforces1046-in the Dream
#include<bits/stdc++.h>
using namespace std;

bool checkHalf(int x, int y) 
{
    return (x <= 2 * (y + 1)) && (y <= 2 * (x + 1));
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
	{
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int dx = c - a;
        int dy = d - b;
        if (dx < 0 || dy < 0) 
		{
            cout << "NO" << endl;
            continue;
        }
        if (checkHalf(a, b) && checkHalf(dx, dy)) 
		{
            cout << "YES" << endl;
        } 
		else 
		{
            cout << "NO" << endl;
        }
    }
    return 0;
}
