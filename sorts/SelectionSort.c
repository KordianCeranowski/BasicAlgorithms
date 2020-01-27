#include <stdio.h>

void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

#define selection_sort(array) selection_sort_with_size(array, sizeof(array)/sizeof(array[0]))
void selection_sort_with_size(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)  //since last element will be the biggest one
    {
        int index_of_smallest_value = i;
	
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[index_of_smallest_value])
            {
                index_of_smallest_value = j;
            }
        }

        swap(array, index_of_smallest_value, i);
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

int main(void)
{
    int array[] = {1, -1, 50, 49, 0, 3, 5, 8, 4, 1, 9, -2};

    print_array(array);
    selection_sort(array);
    print_array(array);

    return 0;
}