//À„∑®-’€∞Î≈≈–Ú 
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;  
    scanf("%d", &n);
    int table[n + 1];  
    
    for (int i = 1; i <= n; i++) 
	{
        scanf("%d", &table[i]);
    }
    
    int target; 
    scanf("%d", &target);
    
    int low = 1;      
    int high = n;     
    int count = 0;    
    int found = 0;    
    
    while (low <= high) 
	{
        count++;  
        
        int mid = low + (high - low) / 2;  
        
        if (table[mid] == target) 
		{
            found = 1;  
            break;
        } 
		else if (table[mid] < target) 
		{
            low = mid + 1;  
        } 
		else 
		{
            high = mid - 1;  
        }
    }
    printf("%d\n", found);
    printf("%d\n", count);
    return 0;
}
