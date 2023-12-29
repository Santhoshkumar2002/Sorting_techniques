#include <stdio.h>

void insertion_sort(int element[], int size)
{
    int temp, j;
    for(int i = 1; i < size; i++)
    {
        temp = element[i];
        j = i-1;
        while(j>=0 && element[j] > temp)
        {
            element[j+1] = element[j];
            j--;
        }
        element[j+1] = temp;
    }
}