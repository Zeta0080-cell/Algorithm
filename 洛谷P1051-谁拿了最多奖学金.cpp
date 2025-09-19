//���P1051-˭������ཱѧ�� 
#include<bits/stdc++.h>
using namespace std; 

const int MAXN = 105;

int main() 
{
    int n;
    cin >> n;
    string s[MAXN];      // ����
    int m[MAXN];         // ��ĩƽ���ɼ�
    int c[MAXN];         // �༶����ɼ�
    char sup[MAXN];      // �Ƿ���ѧ���ɲ� (Y/N)
    char west[MAXN];     // �Ƿ�������ʡ��ѧ�� (Y/N)
    int paper[MAXN];     // �����������
    
    int scholarship[MAXN] = {0}; // ÿ��ѧ���Ľ�ѧ���ܶ�
    int total = 0;               // ����ѧ���Ľ�ѧ������
    
    for (int i = 0; i < n; i++) 
	{
        cin >> s[i] >> m[i] >> c[i] >> sup[i] >> west[i] >> paper[i];
        // ����Ժʿ��ѧ��
        if (m[i] > 80 && paper[i] >= 1) 
		{
            scholarship[i] += 8000;
        }
        // �������Ľ�ѧ��
        if (m[i] > 85 && c[i] > 80) 
		{
            scholarship[i] += 4000;
        }
        // ����ɼ����㽱
        if (m[i] > 90) 
		{
            scholarship[i] += 2000;
        }
        // ����������ѧ��
        if (m[i] > 85 && west[i] == 'Y') 
		{
            scholarship[i] += 1000;
        }
        // ����༶���׽�
        if (c[i] > 80 && sup[i] == 'Y') 
		{
            scholarship[i] += 850;
        }
        total += scholarship[i];
    }
    // �ҳ������ཱѧ���ѧ��
    int max_index = 0;
    for (int i = 1; i < n; i++) 
	{
        if (scholarship[i] > scholarship[max_index]) 
		{
            max_index = i;
        }
    }
    cout << s[max_index] << endl;
    cout << scholarship[max_index] << endl;
    cout << total << endl;
    return 0;
}
