#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printAllSubsequences(int* original_array, int n, int i, int* subsequence_array, int ssi)
{
    if(i >= n)
    {
        printArray(subsequence_array, ssi);
        return;
    }

    // Include the current element
    subsequence_array[ssi] = original_array[i];
    printAllSubsequences(original_array, n, i+1, subsequence_array, ssi+1);

    // Exclude the current element
    printAllSubsequences(original_array, n, i+1, subsequence_array, ssi);
}



int main(void)
{
    int arr[5];
    int subsequence_array[5];

    printf("please enter 5 integers: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printAllSubsequences(arr, 5, 0, subsequence_array, 0);

    return 0;

}


