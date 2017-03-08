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
    // TODO: implement a searching algorithm
      for (int i = 0; i < n; i++)
        if (values[i] == value)
            return true;

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
