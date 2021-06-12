// Insertion sort

void insertion_sort(int* arr, int size)
{
    for(int i=1; i < size; ++i) {
        int j = i - 1, memory = arr[i];
        while((arr[j] > memory) && (j >= 0)) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j+1] = memory;
    }
}