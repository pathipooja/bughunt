#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1),j;

    for (  j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void qs(int *arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        qs(arr, low, pi - 1 );
        qs(arr, pi + 1 , high);
    }
}
void print(int *arr, int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ",&arr[i]);
    printf("\n");
}
int main()
{
    int *arr = {10, 7, 8, 9, 1, 5};
    qs(&arr, 0, 5);
    print(arr, 6);
    return 0;
}
