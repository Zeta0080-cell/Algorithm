//���P1008-������ 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int A=100;A<=333;A++)
	{
		int B=2*A;
		int C=3*A;
		int a=A,b=B,c=C;
		int count[10]={0};//���ڼ���ÿ�����ֳ��ֵĴ���
		//�ֽ�a 
		while(a)
		{
			count[a%10]++;
			a/=10;	
		} 
		//�ֽ�b 
		while(b)
		{
			count[b%10]++;
			b/=10;	
		} 
		//�ֽ�c
		while(c)
		{
			count[c%10]++;
			c/=10;	
		} 
	}
	return 0;
}
