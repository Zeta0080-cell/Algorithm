//牛客周赛125 - 地雷 
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;  // 因为 a_i 最大 1e9，n 最大 3e5，总和可能超 int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        LL total = 0;
        int i = 0;
        
        while (i < n) {
            // 跳过 0
            if (a[i] == 0) {
                i++;
                continue;
            }
            
            // 找到连续非零段的结束位置
            int j = i;
            int min_cost = a[i];  // 当前段的最小花费
            
            while (j < n && a[j] > 0) {
                if (a[j] < min_cost) {
                    min_cost = a[j];
                }
                j++;
            }
            
            // 累加当前段的最小花费
            total += min_cost;
            
            // 跳过这一段
            i = j;
        }
        
        cout << total << "\n";
    }
    
    return 0;
}
