//2023省赛-矩形面积（模拟） 
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,i;//代表输入矩形的数量
	int x1,y1,x2,y2;//代表每个矩形的
	int sum=0; 
	int j,k;//定义两个指针，用于遍历矩形覆盖的范围 
	bool vis[1000][1000];//定义一个布尔数组，用于代表格子是否被覆盖，用整型会超过限制 
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);//输入每个矩形的顶点坐标
		if(x1>x2) swap(x1,x2);
		if(y1>y2) swap(y1,y2);	
		for(j=x1;j<x2;j++)
		{
			for(k=y1;k<y2;k++)
			{
				if(!vis[j][k])
				{
					sum++;
					vis[j][k]=1;//遍历数组，并且计算所覆盖的总面积 
				}
			}
		}
	}
	printf("%d",sum);
	return 0;
}

