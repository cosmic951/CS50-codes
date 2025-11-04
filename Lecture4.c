#include <stdio.h>
#define numbers 30

int main(void)
{
    int array[numbers];
    printf("Input 30 integers.\n");
    for(int i = 0; i < numbers; i++)
    {
        scanf("%i", &(array[i]));
    }
    int max_num = array[0];
    int min_num = array[0];
    int* max = &array[0];
    int* min = &array[0];

    for(int i = 0; i < numbers; i++)
    {
        if (max_num < array[i])
        {
            max_num = array[i];
            max = &array[i];
        }

        if (array[i] < min_num)
        {
            min_num = array[i];
            min = &array[i];
        }
    }
    printf("The biggest integer is, %i\n", max_num);
    printf("The smallest integer is, %i\n", min_num);
    printf("The address of the biggest integer is, %p\n", max);
    printf("The address of the smallest integer is, %p\n", min);

    return 0;
}
