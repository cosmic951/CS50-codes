#include <stdio.h>
#include <string.h>
#define size_A 50
#define size_B 10

int main(void)
{
    int flag2 = 0;
    int max_count = 0, ASCIIcounter_A = 0, ASCIIcounter_B = 0;
    char max_repeated;
    char str_A[size_A];
    char str_B[size_B];
    char ch1;
    char ch2;
    int len, len1, len2;
    int counter=0,flag=0,index;

    printf("Enter string A:\n");
    scanf(" %[^\n]", str_A);

    printf("Enter string B:\n");
    scanf(" %[^\n]", str_B);

    int maxASCII_A, minASCII_A = str_A[0];
    int maxASCII_B, minASCII_B = str_A[0];

    len1 = strlen(str_A);
    len2 = strlen(str_B);


    for (int i=0; i <= len1 - len2; i++)
    {
        for(int j=0; j <= len2; j++)
        {
            ch1 = str_A[i+j];
            ch2 = str_B[j];
            if(ch1 == ch2)
            {
                counter++;
            }

            if(counter==len2)
            {
                flag = 1;
            }
            if(flag2 == 0 && flag == 1)
            {
                index = i;
                flag2 = 1;
            }
            if(ch1 != ch2)
            {
                counter=0;
            }
        }
        counter=0;
    }
    if(flag==1)
        printf("B is substring of A starting at index %d. \n", index);
     else
     {
       printf("B is not substring in A.\n");
     }

    max_repeated=str_A[0];
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len1; j++)
        {
             if (str_A[i] == str_A [j])
                {
                  counter++;
                }
        }
        if (max_count < counter)
        {
            max_count = counter;
            max_repeated = str_A[i];
        }
        counter = 0;
    }

    printf("The character with maximum repititions in A is '%c'.\n", max_repeated);

    counter = 0;


    for(int i = 0; i < len1; i++)
        {
            if (str_A[i] < minASCII_A)
            {
                minASCII_A = str_A[i];
            }
            if (str_A[i] > maxASCII_A)
            {
                maxASCII_A = str_A[i];
            }
        }
    for (int i = 0; i < len2; i++)
    {
        if (str_B[i] < minASCII_B)
        {
            minASCII_B = str_B[i];
        }
        if (str_B[i] > maxASCII_B)
        {
            maxASCII_B = str_B[i];
        }
    }

    int maxASCII, minASCII;

    if (maxASCII_A > maxASCII_B)
    {
        maxASCII = maxASCII_A;
    }
    else
    {
        maxASCII = maxASCII_B;
    }

    if (minASCII_A < minASCII_B)
    {
        minASCII = minASCII_A;
    }
    else
    {
        minASCII = minASCII_B;
    }

    printf("The character with the maximum ASCII value is: '%c', and the character with the minimum ASCII value is: '%c'.\n", maxASCII, minASCII);


    for(int i=0; i <= len1; i++)
    {
        ch1 = str_A[i];
        if(ch1 >= 'a' && ch1 <= 'z')
        {
            ASCIIcounter_A = ASCIIcounter_A + ch1;
        }
    }

    for(int i=0; i <= len2; i++)
    {
        ch2 = str_B[i];
        if(ch2 >= 'a' && ch2 <= 'z')
        {
            ASCIIcounter_B = ASCIIcounter_B + ch2;
        }
    }

    printf("The sum of the ASCII values of the lowercase letters in A %d, and in B is %d.\n", ASCIIcounter_A, ASCIIcounter_B);




    return 0;
}
