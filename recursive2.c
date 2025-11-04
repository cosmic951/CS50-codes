#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printAllSubsequences(int* original_array, int n, int index, int* subsequence_array, int ssi)
{
    if (index == n)
    {
        if (ssi > 0)
        {
            printArray(subsequence_array, ssi);
        }
        return;
    }


    subsequence_array[ssi] = original_array[index];
    printAllSubsequences(original_array, n, index + 1, subsequence_array, ssi + 1); // Include the current element

    printAllSubsequences(original_array, n, index + 1, subsequence_array, ssi); // Exclude the current element
}

int main(void)
{
    int arr[5];
    int subsequence_array[5];

    printf("Please enter 5 integers: \n");
    for (int i = 0; i < 5; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Input error!\n");
            return 1;
        }
    }

    printf("All Subsequences of the given array:\n");
    printAllSubsequences(arr, 5, 0, subsequence_array, 0);

    return 0;
}
