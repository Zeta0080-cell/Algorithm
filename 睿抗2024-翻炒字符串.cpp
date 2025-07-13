//睿抗2024-翻炒字符串 
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    // 第一步：翻转字符串
    reverse(s.begin(), s.end());
    
    // 第二步：根据长度奇偶性删除字符
    int len = s.length();
    if (len % 2 == 1) {
        // 奇数长度，删除中间字符
        int mid = len / 2;
        s.erase(mid, 1);
    } else {
        // 偶数长度，删除两端字符
        if (s.size() >= 2) {
            s.erase(0, 1);
            s.erase(s.size() - 1, 1);
        }
    }
    
    // 第三步：两两交换字符
    for (int i = 0; i < s.size(); i += 2) {
        if (i + 1 < s.size()) {
            swap(s[i], s[i + 1]);
        }
    }
    
    cout << s << endl;
    
    return 0;
}
