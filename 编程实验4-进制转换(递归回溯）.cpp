//编程实验4-进制转换(递归回溯） 
#include<bits/stdc++.h>
using namespace std;

void dt(int n)//转换函数
{
	if(n<8)
	{
		printf("%d",n);//终止条件	
	}	
	else
	{
		dt(n/8);
		printf("%d",n%8);
	}
} 

int main()
{
	int n;
	cin>>n;
	dt(n);
	return 0;
} 
