//代码模版-高精度减法 
#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a, vector<int> b) 
{
    if (a.size() != b.size()) 
	{
        return a.size() > b.size();
    }
    for (int i = a.size() - 1; i >= 0; i--) 
	{
        if (a[i] != b[i]) 
		{
            return a[i] > b[i];
        }
    }
    return true; // 相等时返回 true
}

vector<int> sub(vector<int> a, vector<int> b) 
{
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size(); i++) 
	{
        t = a[i] - t;
        if (i < b.size()) 
		{
            t -= b[i];
        }
        c.push_back((t + 10) % 10);
        if (t < 0) 
		{
            t = 1;
        } 
		else 
		{
            t = 0;
        }
    }
    while (c.size() > 1 && c.back() == 0) 
	{
        c.pop_back();
    }
    return c;
}

int main() 
{
    string A, B;
    vector<int> a, b;
    cin >> A >> B;
    for (int i = A.size() - 1; i >= 0; i--) 
	{
        a.push_back(A[i] - '0');
    }
    for (int i = B.size() - 1; i >= 0; i--) 
	{
        b.push_back(B[i] - '0');
    }
    if (cmp(a, b)) 
	{
        vector<int> c = sub(a, b);
        for (int i = c.size() - 1; i >= 0; i--) 
		{
            printf("%d", c[i]);
        }
    } 
	else 
	{
        vector<int> c = sub(b, a);
        printf("-");
        for (int i = c.size() - 1; i >= 0; i--) 
		{
            printf("%d", c[i]);
        }
    }
    return 0;
}
