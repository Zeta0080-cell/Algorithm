//百度之星2024-补给 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    vector<int> p(n), s(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i] >> s[i];
    }

    int max_forts = 0;

    // 尝试对每一个堡垒使用优惠
    for (int k = 0; k < n; k++) {
        vector<int> total_cost(n);
        for (int i = 0; i < n; i++) {
            if (i == k) {
                total_cost[i] = (p[i] / 2) + s[i]; // 对第k个堡垒使用优惠
            } else {
                total_cost[i] = p[i] + s[i]; // 其他堡垒正常计算
            }
        }

        // 按总成本排序，从小到大选择
        sort(total_cost.begin(), total_cost.end());
        int current_sum = 0;
        int forts = 0;
        for (int i = 0; i < n; i++) {
            if (current_sum + total_cost[i] <= b) {
                current_sum += total_cost[i];
                forts++;
            } else {
                break;
            }
        }

        // 更新最大值
        max_forts = max(max_forts, forts);
    }

    cout << max_forts << endl;
    return 0;
}
