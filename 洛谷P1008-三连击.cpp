//洛谷P1008-三连击 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    for (int A = 100; A <= 333; A++) {
        int B = 2 * A;
        int C = 3 * A;
        
        // 检查A、B、C是否都是三位数（实际上因为A<=333，所以C最大为999，满足）
        if (B > 999 || C > 999) continue;
        
        int count[10] = {0}; // 用于计数每个数字出现的次数（下标0~9）
        int a = A, b = B, c = C;
        
        // 分解A的各位数字
        while (a) {
            count[a % 10]++;
            a /= 10;
        }
        // 分解B的各位数字
        while (b) {
            count[b % 10]++;
            b /= 10;
        }
        // 分解C的各位数字
        while (c) {
            count[c % 10]++;
            c /= 10;
        }
        
        // 检查1~9是否每个都出现一次，且不能有0
        bool valid = true;
        if (count[0] != 0) valid = false; // 不能有0
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
