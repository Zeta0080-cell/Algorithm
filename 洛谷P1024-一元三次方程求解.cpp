//���P1024-һԪ���η������
#include<bits/stdc++.h>
using namespace std;


int main()
{
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	for(double i=-100;i<=100;i++)
	{
		if((a*i*i*i+b*i*i+c*i+d)==0)
		{
			printf("%.2f ",i);	
		} 
	}
	return 0;
} 
