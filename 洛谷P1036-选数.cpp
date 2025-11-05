//洛谷P1036-选数
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
int n, k, a[N], result = 0;

//素数判断 
bool isPrime(int num) 
{
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

//搜索 
void DFS(int start, int count, int sum) 
{
    // 如果已经选了k个数
    if (count == k) 
	{
        if (isPrime(sum)) 
		{
            result++;
        }
        return;
    }
    
    // 从start开始选择，避免重复组合
    for (int i = start; i < n; i++) 
	{
        // 选择第i个数，继续递归
        DFS(i + 1, count + 1, sum + a[i]);
    }
}

int main() 
{
    // 输入
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);  
    }
    
    // 从第0个位置开始，当前选了0个数，当前和为0
    DFS(0, 0, 0);
    
    // 输出结果
    printf("%d\n", result);
    return 0;
}
