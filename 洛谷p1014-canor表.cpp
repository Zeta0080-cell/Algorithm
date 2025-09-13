//Âå¹Èp1014-canor±í 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j;
	int n,count=0,sum=2;
	cin>>n;
	while(sum!=0)
	{
		for(i=1;i<sum;i++)
		{
			count++;	
			if(count==n)
			{
				printf("%d/%d",i,sum-i);
				break;
			}
		} 
		sum++;
	}
	return 0;
}
