//���P1062-����
#include <stdio.h>
#include <math.h>

int main() 
{
    int k, N;
    scanf("%d %d", &k, &N);
    long long result = 0;
    int power = 0;
    int n = N;
    // ��N��������������ÿһλ��Ӧk���ݴ�
    while (n > 0) 
	{
        if (n & 1) 
		{  // ������λ�Ƿ�Ϊ1
            result += (long long)pow(k, power);
        }
        n >>= 1;      // ����һλ
        power++;      // �ݴ�����
    }
    printf("%lld\n", result);
    return 0;
}
