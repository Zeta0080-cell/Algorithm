//�2024-�����ַ��� 
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    // ��һ������ת�ַ���
    reverse(s.begin(), s.end());
    
    // �ڶ��������ݳ�����ż��ɾ���ַ�
    int len = s.length();
    if (len % 2 == 1) {
        // �������ȣ�ɾ���м��ַ�
        int mid = len / 2;
        s.erase(mid, 1);
    } else {
        // ż�����ȣ�ɾ�������ַ�
        if (s.size() >= 2) {
            s.erase(0, 1);
            s.erase(s.size() - 1, 1);
        }
    }
    
    // �����������������ַ�
    for (int i = 0; i < s.size(); i += 2) {
        if (i + 1 < s.size()) {
            swap(s[i], s[i + 1]);
        }
    }
    
    cout << s << endl;
    
    return 0;
}
