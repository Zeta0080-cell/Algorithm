//�2024-���� 
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    scanf("%d", &N); // ������    
    int east = 0; // �����ĳ�����
    int west = 0; // �����ĳ�����
    int speed;
    for (int i = 0; i < N; i++) 
	{
        scanf("%d", &speed); // ��ȡÿ�������ٶ�
        if (speed > 0) 
		{
            east++; // ������ʾ����
        } 
		else 
		{
            west++; // ������ʾ����
        }
    }
    // �ж��ĸ�����ĳ����࣬������ٵ�����
    if (east > west) 
	{
        printf("%d\n", west);
    } 
	else 
	{
        printf("%d\n", east);
    }
    return 0;
}
