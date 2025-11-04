#include <stdio.h>

int main(void)
{
    int n = 1;

    printf("the 50 first natural numbers are: \n");
    natural(n);

    return 0;

}

int natural(int n)
{
    if(n <= 50)
    {
        printf("%d ", n);
        natural(n + 1);
    }

}
