//洛谷提高组P1016-加油站问题 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

int main()
{
	double s,c,l,p0,n;
	double p[N],d[N];
	double result = 0;
	
	//预处理 
	scanf("%lf%lf%lf%lf%d",&s,&c,&l,&p0,&n);
	for(int i = 1; i <= n; i ++)
	{
		scanf("%lf%lf",&d[i],&p[i]);
	}
	d[0] = 0;
	p[0] = p0;
	
	//无法到达情况特判 
	for(int i = 1; i <= n; i ++)
	{
	
		if((d[1] > 326.06) || (d[i] - d[i-1] > 326.06))
		{
			printf("No Solution\n");
		}
	}
	
	//贪心策略 (双指针实现) 
	for(int i = 0; i <= n; i ++)  //扫描每一个加油站
	{
		for(int j = i + 1; j <= n; j ++)
		{
			//如果范围内存在价格较低的加油站，就正好加油到这个加油站 
			if((d[j] - d[i] <= 326.06) && (p[j] <= p[i])) 
			{
				result += (d[j] - d[i])/p[i];
			}
		}	
	} 
	printf("%lf",result); 
	return 0;
}
