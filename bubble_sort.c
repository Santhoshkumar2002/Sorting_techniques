#include <stdio.h>

void bubble_sort(int *element, int size)
{
    int temp;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(element[j] > element[j+1])
            {
                temp = element[j];
                element[j] = element[j+1];
                element[j+1] = temp;
            }
        }
    }
}