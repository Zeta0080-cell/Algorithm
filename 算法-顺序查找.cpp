//À„∑®-À≥–Ú≤È’“ 
#include<bits/stdc++.h>
#define MAXSIZE 100
using namespace std;

int main()
{
    int a[MAXSIZE];
    int n;
    int log;
    int index = -1;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    cin >> log;
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] == log)
        {
            index = i + 1; 
            break; 
        }
    }
    
    printf("%d", index); 
    return 0;
}
