//��������-�������У�˫ָ��O��kn����
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N];//ԭ����  

int main()
{
	int n,k;//���鳤�Ⱥʹ��ڵĳ��� 
    int min[N], max[N];// �洢ÿ�����ڵ���Сֵ�����ֵ
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int idx = 0;
    for (int i = 0; i <= n - k; i++) 
	{
        int cmin = 100000;
        int cmax = -100000;
        // ���������ڵ�����Ԫ��
        for (int j = i; j < i + k; j++) 
		{
            if (a[j] < cmin) cmin = a[j];
            if (a[j] > cmax) cmax = a[j];
        }

        min[idx] = cmin;
        max[idx] = cmax;
        idx++;
    }
    // �����Сֵ
    for (int i = 0; i < idx; i++) 
	{
        cout << min[i] << " ";
    }
    cout << endl;
    // ������ֵ
    for (int i = 0; i < idx; i++) 
	{
        cout << max[i] << " ";
    }
    cout << endl;
	return 0;
} 
