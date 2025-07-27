//acwing802-区间和(y)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> PII;

const int N = 300010; // n + 2m最多是3e5
int n, m;
int a[N], s[N]; // a数组存储离散化后的值，s是前缀和数组

vector<int> alls; // 存储所有待离散化的坐标
vector<PII> add, query; // add存储所有添加操作，query存储所有查询操作

// 二分查找离散化后的值
int find(int x) {
    int l = 0, r = alls.size() - 1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (alls[mid] == x) return mid + 1; // 返回的从1开始的下标
        if (alls[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

int main() {
    cin >> n >> m;
    // 读取添加操作
    for (int i = 0; i < n; i++) {
        int x, c;
        cin >> x >> c;
        add.push_back({x, c});
        alls.push_back(x);
    }
    // 读取查询操作
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        alls.push_back(l);
        alls.push_back(r);
    }
    // 离散化：排序并去重
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());
    // 处理添加操作
    for (auto item : add) {
        int x = find(item.first);
        a[x] += item.second;
    }
    // 预处理前缀和
    for (int i = 1; i <= alls.size(); i++) {
        s[i] = s[i - 1] + a[i];
    }
    // 处理查询操作
    for (auto item : query) {
        int l = find(item.first), r = find(item.second);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
} 
