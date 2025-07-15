//acwing_722数字序列和它的和 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while(cin >> n >> m)
	{
        int s = 0;
        if(n > 0 && m > 0)
		{
            if(n > m) swap(n, m);
            for(int i = n;i <= m;i++)
			{
                cout << i << " ";
                s += i;
            }
            cout << "Sum=" << s << endl;
        }
    }
    return 0;
}
