//算法-直接插入排序 
#include <stdio.h>
void print(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertSort(int arr[], int n) 
{
    for (int i = 1; i < n; i++) 
	{
        int key = arr[i];
        int j = i - 1;

       
        while (j >= 0 && arr[j] > key) 
		{
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        print(arr, n);
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
    insertSort(arr, n);
    return 0;
}
