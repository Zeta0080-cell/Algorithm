//洛谷P1062-数列
#include <stdio.h>
#include <math.h>

int main() 
{
    int k, N;
    scanf("%d %d", &k, &N);
    long long result = 0;
    int power = 0;
    int n = N;
    // 将N看作二进制数，每一位对应k的幂次
    while (n > 0) 
	{
        if (n & 1) 
		{  // 检查最低位是否为1
            result += (long long)pow(k, power);
        }
        n >>= 1;      // 右移一位
        power++;      // 幂次增加
    }
    printf("%lld\n", result);
    return 0;
}
