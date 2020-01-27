#include<stdio.h>

#define print_array(array) print_array_of_size(array, sizeof(array)/sizeof(array[0]))
void print_array_of_size(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}


#define insertion_sort(array) insertion_sort_with_size(array, sizeof(array)/sizeof(array[0]))
void insertion_sort_with_size(int array[], int size)
{
	for (int i = 1; i < size; i++) 
	{
        int value = array[i];
		int j = i;
		while (j > 0 && array[j - 1] > value) 
		{
			array[j] = array[j - 1];
			j--;
		}
		array[j] = value;
	}
}

int main()
{
    int array[] = {1, -1, 50, 49, 0, 3, 5, 8, 4, 1, 9, -2};

    print_array(array);
    insertion_sort(array);
    print_array(array);

    return 0;
}