//���P1031-����ֽ��
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int main() 
{
    int n, sum = 0, average;
    int count = 0;
    int a[N];
    
    cin >> n;
    for(int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
        sum += a[i];
    }
    average = sum / n;
    
    // �����Ҵ���ÿ��ֽ��
    for(int i = 0; i < n - 1; i++) 
	{
        if(a[i] != average) 
		{
            // ������Ҫ�ƶ�������
            int move = a[i] - average;
            // ��������Ƹ���һ�ѣ����ߴ���һ������
            a[i + 1] += move;
            // �ƶ�һ��
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
