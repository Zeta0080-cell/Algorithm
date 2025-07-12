//睿抗2024-逆行 
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    scanf("%d", &N); // 车辆数    
    int east = 0; // 朝东的车辆数
    int west = 0; // 朝西的车辆数
    int speed;
    for (int i = 0; i < N; i++) 
	{
        scanf("%d", &speed); // 读取每辆车的速度
        if (speed > 0) 
		{
            east++; // 正数表示朝东
        } 
		else 
		{
            west++; // 负数表示朝西
        }
    }
    // 判断哪个方向的车辆多，输出较少的数量
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
