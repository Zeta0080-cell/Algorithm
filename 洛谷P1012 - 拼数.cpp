//Âå¹ÈP1012 - Æ´Êý
#include<bits/stdc++.h>
using namespace std;
const int N = 21;
string a[N];
int n;

bool cmp(string a,string b)
{
	return (a + b) > (b + a);	
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	string ans = "";
	sort(a + 1, a + 1 + n, cmp);
	for(int i = 1; i <= n; i ++)
	{
		ans += a[i];
	}
	cout << ans << endl;
	return 0;
} 
