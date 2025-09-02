//���P1008-������ 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    for (int A = 100; A <= 333; A++) {
        int B = 2 * A;
        int C = 3 * A;
        
        // ���A��B��C�Ƿ�����λ����ʵ������ΪA<=333������C���Ϊ999�����㣩
        if (B > 999 || C > 999) continue;
        
        int count[10] = {0}; // ���ڼ���ÿ�����ֳ��ֵĴ������±�0~9��
        int a = A, b = B, c = C;
        
        // �ֽ�A�ĸ�λ����
        while (a) {
            count[a % 10]++;
            a /= 10;
        }
        // �ֽ�B�ĸ�λ����
        while (b) {
            count[b % 10]++;
            b /= 10;
        }
        // �ֽ�C�ĸ�λ����
        while (c) {
            count[c % 10]++;
            c /= 10;
        }
        
        // ���1~9�Ƿ�ÿ��������һ�Σ��Ҳ�����0
        bool valid = true;
        if (count[0] != 0) valid = false; // ������0
        for (int i = 1; i <= 9; i++) {
            if (count[i] != 1) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            cout << A << " " << B << " " << C << endl;
        }
    }
    return 0;
}
