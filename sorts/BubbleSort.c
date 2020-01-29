#include <stdio.h>

void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

#define bubble_sort(array) bubble_sort_with_size(array, sizeof(array)/sizeof(array[0]))
void bubble_sort_with_size(int array[], int size)
{
    for(int k = 0; k < size - 1; k++)
    {
        for(int i = 0; i < size - 1 - k; i++)
        {
            if(array[i] > array[i + 1])
            {
                swap(array, i, i+1);
            }
        }
    }
}

#define print_array(array) print_array_of_size(array, sizeof(array)/sizeof(array[0]))
void print_array_of_size(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {1, -1, 50, 49, 0, 3, 5, 8, 4, 1, 9, -2};

    print_array(array);
    bubble_sort(array);
    print_array(array);

    return 0;
}