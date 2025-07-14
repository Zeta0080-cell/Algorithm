//À„∑®-√∞≈›≈≈–Ú 
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    int swapped;
    for (i = 0; i < n - 1; i++) 
	{
        swapped = 0; 
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                // ‰∫§Êç¢Áõ∏ÈÇªÂÖÉÁ¥†
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }
       
        for (int k = 0; k < n; k++) 
		{
            printf("%d", arr[k]);
            if (k != n - 1) 
			{
                printf(" ");
            }
        }
        printf("\n");
       
        if (!swapped) 
		{
            break;
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]); 
    }
    bubbleSort(arr, n); 
    return 0;
}
