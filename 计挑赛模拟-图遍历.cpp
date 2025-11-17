//计挑赛模拟-图遍历
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;

vector<pair<int, int>> g[N]; // 邻接表，存储(to, time)
int n, m, s, t, t0;
long long ans = 0;

void dfs(int u, long long sum_time) 
{
    if (u == t) 
	{
        ans += sum_time + t0;
        return;
    }
    for (auto &edge : g[u]) 
	{
        int v = edge.first;
        int w = edge.second;
        dfs(v, sum_time + w);
    }
}

int main()
{
    //景点、路径、西端编号、东端编号、回城时间 
    //预处理 
    scanf("%d%d%d%d%d", &n, &m, &s, &t, &t0);
    for (int i = 1; i <= m; i++) 
	{
        int x, y, tt;
        scanf("%d%d%d", &x, &y, &tt);
        g[x].push_back({y, tt});
    }
    
    dfs(s, 0);
    printf("%lld\n", ans);
    return 0;
}
