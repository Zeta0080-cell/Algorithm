//���P1029-�����������С������ 
#include<bits/stdc++.h>
using namespace std;

// �������Լ��
int gcd(int a, int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

// ������С������
int lcm(int a, int b) 
{
    return a * b / gcd(a, b);
}

int main() 
{
    int x, y; // ���Լ������С������
    int cnt = 0;
    scanf("%d%d", &x, &y);
    
    // �������п��ܵ�����
    for (int i = x; i <= y; i += x) 
	{ // i������x�ı���
        if (y % i != 0) continue;     // i������y��Լ��
        
        int j = x * y / i;            // ���� a �� b = gcd �� lcm
        if (j < x || j > y) continue; // j�����ں���Χ��
        
        if (gcd(i, j) == x && lcm(i, j) == y) 
		{
            cnt++;
        }
    }
    
    printf("%d", cnt);
    return 0;
}
