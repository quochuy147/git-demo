#Sort form big to small

#include <stdio.h>
#include <stdlib.h>

const int limit = 1000;

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

void bubble_sort(int* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size-i-1; ++j)
        {
            int x = arr[j];
            int y = arr[j+1];
            if(x < y)
            {
                arr[j] = y;
                arr[j+1] = x;
            }
        }
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

    bubble_sort(arr, size);

    printf("Sorted array:\n");
    print_array(arr, size);

    free(arr);
    return 0;
}
