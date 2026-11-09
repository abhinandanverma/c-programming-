#include <stdio.h>

int largest(int arr[], int n)
{
    int i, j, temp;

    // Sorting (descending)
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // second largest find
    for(i = 1; i < n; i++)
    {
        if(arr[i] != arr[0])
        {
            return arr[i];
        }
    }

    return -1;
}

int main()
{
    int arr[] = {5, 3, 9, 7, 9};
    int n = 5;
    printf("Second Largest = %d", largest(arr, n));

    return 0;
}