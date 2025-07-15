#include <stdio.h>
int main() 
{
    int n, k, min, index = 0;
    int a[100];    
    scanf("%d %d", &n, &k); // 获取 n 和 k 的值
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]); // 输入数组元素
    }

    for (int j = 1; j <= k; j++)
	{ // 要进行 k 次操作
        min = a[0];
        index = 0;
        
        // 找到最小值和它的索引
        for (int i = 1; i < n; i++) 
		{
            if (a[i] < min) 
			{
                min = a[i];
                index = i;
            }
        }

        // 相邻元素加上最小值
        if (index - 1 >= 0) 
		{
            a[index - 1] += min;
        }
        if (index + 1 < n) 
		{
            a[index + 1] += min;
        }

        // 删除最小值位置上的元素
        for (int i = index; i < n - 1; i++) 
		{
            a[i] = a[i + 1]; // 将后面的元素左移
        }   
        n--; // 数组长度减1
    }
    // 输出处理后的数组
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);
    }

    return 0;
}

