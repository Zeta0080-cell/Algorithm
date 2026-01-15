// 牛客周赛125 - 异或运算
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        string A, B;
        cin >> n >> m >> A >> B;
        
        int xorA = 0, xorB = 0;
        for (char c : A) xorA ^= (c - '0');
        for (char c : B) xorB ^= (c - '0');
        
        if (xorA != xorB) {
            cout << "NO\n";
            continue;
        }
        
        int i = n - 1, j = m - 1;
        while (j > 0) {
            if (i < j) break;               // 字符不够
            if (A[i] == B[j]) i--, j--;
            else if (i > 0 && ((A[i-1] - '0') ^ (A[i] - '0')) == (B[j] - '0'))
                i -= 2, j--;
            else break;
        }
        
        cout << (j == 0 && i >= 0 ? "YES\n" : "NO\n");
    }
    return 0;
} 
