/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int min = 0;
    int max = n - 1;
    
    while(min<=max)
    {
        int mid = min + ((max-min)/2);
        if (value == values[mid])
        {
            return true;
        }
        else if (value < values[mid])
        {
            max = mid - 1;
        }
        else if (value > values[mid])
        {
            min = mid + 1;
        }
        else
        {
            return false;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    bool k;

    do
    {
        k = false;
        for (int i = 0; i < n-1; i++)
        {
            if (values[i] > values[i+1])
            {
                int tmp = values[i];
                values[i] = values[i+1];
                values[i+1] = tmp;
                k = true;
            }
        }
    } while (k == true);
    return;
}
