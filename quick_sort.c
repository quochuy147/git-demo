#include <stdio.h>
#include <stdlib.h>

const int limit = 1000;

int* gen_array(int size, int limit)
{
    int* arr = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        int n = rand() % limit;
        arr[i] = n;
    }
    return arr;
}

void print_array(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int* arr, int i, int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

size1 = 7;
void quick_sort(int* arr, int start, int end)
{
    int left = start;
    int right = end;
    int pivot = arr[(left + right) / 2];
    printf("pivot : %d %d\n", (left + right) / 2,  pivot);
    while(left < right) {
        while(left <= right && arr[left] < pivot) {
            left++;
        }
        //printf("i : %d %d\n", left, arr[left]);
        while(right >= left && arr[right] > pivot) {
            right--;
        }
        //printf("j : %d %d\n",right, arr[right]);

        if(left <= right) {
            swap(arr, left, right);
            left++;
            right--;
            //for(int i = 0; i <  size1; ++i) {printf("%d ",arr[i]); if(i == size1-1) printf("\n");}
        }
    }
    //swap(arr, left, end);
    if(start < right) {
        quick_sort(arr, start, right);
    }
    if(left < end) {
        quick_sort(arr, left, end);
    }
}

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    printf("Input size of array:\n");
    int size;
    scanf("%d", &size);

    int* arr = gen_array(size, limit);

    printf("Generated array:\n");
    print_array(arr, size);

    quick_sort(arr, 0, size-1);

    printf("Sorted array:\n");
    print_array(arr, size);
    free(arr);
    return 0;
}
