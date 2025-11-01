//牛客周赛112-icpc奖牌
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    
    // 计算金奖数量（向上取整）
    int gold = (n + 9) / 10;
    
    // 计算各奖项的排名边界
    int gold_end = gold;
    int silver_end = gold + 2 * gold;
    int bronze_end = gold + 2 * gold + 3 * gold;
    
    // 判断奖项
    if (k <= gold_end) 
	{
        cout << "Gold Medal" << endl;
    } 
	else if (k <= silver_end) 
	{
        cout << "Silver Medal" << endl;
    } 
	else if (k <= bronze_end) 
	{
        cout << "Bronze Medal" << endl;
    } 
	else 
	{
        cout << "Da Tie" << endl;
    }
    
    return 0;
}
