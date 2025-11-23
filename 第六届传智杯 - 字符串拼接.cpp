//第六届传智杯 - 字符串拼接 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int main()
{
    string s1, s2;
    char result[N];
    int tmp = 0;  // 改为int类型
    
    cin >> s1 >> s2;

    // 复制s1到result
    for(int i = 0; i < s1.length(); i++)
    {
        result[tmp] = s1[i];
        tmp++;
    }
    
    // 复制s2到result
    for(int j = 0; j < s2.length(); j++)
    {
        result[tmp] = s2[j];
        tmp++;
    }
    
    // 添加字符串结束符
    result[tmp] = '\0';
    
    // 打印结果
    for(int i = 0; result[i] != '\0'; i++)
    {
        printf("%c", result[i]);
    }
    return 0;
}
