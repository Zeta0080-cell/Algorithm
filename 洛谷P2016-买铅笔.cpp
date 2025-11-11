//洛谷P2016-买铅笔 
#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int min_cost = 100000000; // 初始化为一个很大的数
    
    // 读取三种包装的信息
    for (int i = 0; i < 3; i++) 
	{
        int count, price;
        scanf("%d %d", &count, &price);
        
        // 计算需要买多少包（向上取整）
        int packages = (n + count - 1) / count;
        
        // 计算总花费
        int total_cost = packages * price;
        
        // 更新最小值
        if (total_cost < min_cost) 
		{
            min_cost = total_cost;
        }
    }
    
    printf("%d\n", min_cost);
    
    return 0;
}
