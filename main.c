#include <stdio.h>
#include "main.h"

int main()
{
    int size, option;
    char choice = 'y';
    while (choice == 'y')
    {
        printf("Enter the size of an array : ");
        scanf("%d", &size);
        int element[size];

        printf("Enter the array elements : ");
        for(int i = 0; i < size; i++)
        {
            scanf("%d", element+i);
        }
        printf("1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Merge Sort\n5. Quick Sort\n");
        printf("Select option to sort in which technique : ");
        scanf(" %d", &option);
        switch (option)
        {
            case 1:
            {
                bubble_sort(element, size);
                break;
            }
            case 2:
            {
                insertion_sort(element, size);
                break;
            }
            case 3:
            {
                selection_sort(element, size);
                break;
            }
        }
        printf("Sorted elements : ");
        for(int i = 0; i < size; i++)
        {
            printf("%d ", element[i]);
        }
        printf("\n\n");

        printf("Enter choice to retry (y/n): ");
        scanf(" %c", &choice);
    }
}