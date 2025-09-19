//洛谷P1051-谁拿了最多奖学金 
#include<bits/stdc++.h>
using namespace std; 

const int MAXN = 105;

int main() 
{
    int n;
    cin >> n;
    string s[MAXN];      // 姓名
    int m[MAXN];         // 期末平均成绩
    int c[MAXN];         // 班级评议成绩
    char sup[MAXN];      // 是否是学生干部 (Y/N)
    char west[MAXN];     // 是否是西部省份学生 (Y/N)
    int paper[MAXN];     // 发表的论文数
    
    int scholarship[MAXN] = {0}; // 每个学生的奖学金总额
    int total = 0;               // 所有学生的奖学金总数
    
    for (int i = 0; i < n; i++) 
	{
        cin >> s[i] >> m[i] >> c[i] >> sup[i] >> west[i] >> paper[i];
        // 计算院士奖学金
        if (m[i] > 80 && paper[i] >= 1) 
		{
            scholarship[i] += 8000;
        }
        // 计算五四奖学金
        if (m[i] > 85 && c[i] > 80) 
		{
            scholarship[i] += 4000;
        }
        // 计算成绩优秀奖
        if (m[i] > 90) 
		{
            scholarship[i] += 2000;
        }
        // 计算西部奖学金
        if (m[i] > 85 && west[i] == 'Y') 
		{
            scholarship[i] += 1000;
        }
        // 计算班级贡献奖
        if (c[i] > 80 && sup[i] == 'Y') 
		{
            scholarship[i] += 850;
        }
        total += scholarship[i];
    }
    // 找出获得最多奖学金的学生
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
