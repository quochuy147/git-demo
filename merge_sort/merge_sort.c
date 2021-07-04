//Merge sort

#include<stdlib.h>
#include<stdio.h>

const int limit = 10000;

int* gen_array(int size, int limit)
{
    int* arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        int n = rand() % limit;
        arr[i] = n;
    }
    return arr;
}

void print_array(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void merge_sort_recursive(int* arr, int start, int end)
{
    if(end - start <= 1) {
        return;
    }
    int mid = (start + end) / 2;
    merge_sort_recursive(arr, start, mid);
    merge_sort_recursive(arr, mid, end);
    int* tmp = (int*)calloc(end - start, sizeof(int));
    int i = start, j = mid;
    int t = 0;
    while(i < mid && j < end) {
        if(arr[i] <= arr[j]) {
            tmp[t++] = arr[i++];
        }
        else {
            tmp[t++] = arr[j++];
        }
    }
    while(i < mid) {
        tmp[t++] = arr[i++];
    }
    while(j < end) {
        tmp[t++] = arr[j++];
    }
    for(int i = 0; i < end - start; i++) {
        arr[start + i] = tmp[i];
    }
    free(tmp);
}

void merge_sort(int* arr, int size)
{
    merge_sort_recursive(arr, 0, size);
}

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    printf("Input :\n");
    int size;
    scanf("%d", &size);
    int* arr = gen_array(size, limit);
    printf("Generated array :\n");
    print_array(arr, size);
    merge_sort(arr, size);
    printf("Sorted array :\n");
    print_array(arr, size);
    return 0;
}
