#include <stdio.h>

void selection_sort(int element[], int size)
{
    int min, temp, j;
    for(int i = 0; i < size; i++)
    {
        min = i;
        for(j = i+1; j < size; j++)
        {
            if(element[min] > element[j])
            {
                min = j;
            }
        }
        if(min != i)
        {
            temp = element[min];
            element[min] = element[i];
            element[i] = temp;
        }
    }
}