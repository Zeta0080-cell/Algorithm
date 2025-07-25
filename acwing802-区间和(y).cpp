//acwing802-�����(y)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> PII;

const int N = 300010; // n + 2m�����3e5
int n, m;
int a[N], s[N]; // a����洢��ɢ�����ֵ��s��ǰ׺������

vector<int> alls; // �洢���д���ɢ��������
vector<PII> add, query; // add�洢������Ӳ�����query�洢���в�ѯ����

// ���ֲ�����ɢ�����ֵ
int find(int x) {
    int l = 0, r = alls.size() - 1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (alls[mid] == x) return mid + 1; // ���صĴ�1��ʼ���±�
        if (alls[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

int main() {
    cin >> n >> m;
    // ��ȡ��Ӳ���
    for (int i = 0; i < n; i++) {
        int x, c;
        cin >> x >> c;
        add.push_back({x, c});
        alls.push_back(x);
    }
    // ��ȡ��ѯ����
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        alls.push_back(l);
        alls.push_back(r);
    }
    // ��ɢ��������ȥ��
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());
    // ������Ӳ���
    for (auto item : add) {
        int x = find(item.first);
        a[x] += item.second;
    }
    // Ԥ����ǰ׺��
    for (int i = 1; i <= alls.size(); i++) {
        s[i] = s[i - 1] + a[i];
    }
    // �����ѯ����
    for (auto item : query) {
        int l = find(item.first), r = find(item.second);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
} 
