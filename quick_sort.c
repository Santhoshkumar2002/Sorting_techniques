#include <stdio.h>
#include "main.h"

void quick_sort(int *element, int low, int high)
{
    if(low < high)
    {
        int index = parition(element, low, high);
        quick_sort(element, low, index-1);
        quick_sort(element, index+1, high);
    }
}

int parition(int *element, int low, int high)
{
    int pivot = element[low], start = low, end = high;
    while(start < end)
    {
        while(element[start] <= pivot)
        {
            start++;
        }
        while(element[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            int temp = element[start];
            element[start] = element[end];
            element[end] = temp;
        }
    }
    int temp = element[low];
    element[low] = element[end];
    element[end] = temp;
    return end;
}