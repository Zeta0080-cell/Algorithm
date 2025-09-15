//Âå¹ÈP1009-½×³ËÖ®ºÍ
#include<bits/stdc++.h>
using namespace std;

int multify(int x)
{
	if(x!=1)
	{
		return x*multify(x-1);
	}
} 

int main()
{
	int result;
	int temp;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		temp=multify(i);
		result+=temp; 
	}
	printf("%d",result);
	return 0;
}
