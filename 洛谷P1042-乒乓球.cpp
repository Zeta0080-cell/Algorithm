//Âå¹ÈP1042-Æ¹ÅÒÇò 
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
char a[N];
int w,l,i; 
int main()
{
	for(i=1; ;i++)
	{
		cin>>a[i];
		if(a[i]=='E')
		{
			i--;
			break;
		}
	}
	for(int x=1;x<=i;x++)
	{
		if(a[x]=='W') w++;
		if(a[x]=='L') l++;
		if((max(w,l)>=11))&&abs(w-l)>=2)
		{ 
			cout<<w<<":"<<l<<"\n";
			w=0,l=0;
		}
	}
	cout<<w<<":"<<l<<"\n\n";
	w=0,l=0;
	for(int x=1;x<=i;x++)
	{
		if(a[x]=='W') w++;
		if(a[x]=='L') l++;
		if(((max(w,l)>=21))&&abs(w-l)>=2)
		{
			cout<<w<<":"<<l<<"\n";
			w=0,l=0;
		}
	}
	cout<<w<<":"<<l<<"\n";
	return 0;
}

