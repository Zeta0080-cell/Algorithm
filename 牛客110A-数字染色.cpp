//Å£¿Í110A-Êý×ÖÈ¾É« 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==2)
    {
        printf("YES\n");
    }
    else if(n==1)
    {
        printf("NO\n");
    }
    else
    {
        if(n%2==0)
        {
            printf("YES\n");
        }
        else if(n%3==0)
        {
            printf("YES\n");
        }
        else if(n%5==0)
        {
            printf("YES\n");
        }
        else 
        {
            printf("YES\n");
        }
    }
    return 0;
}
