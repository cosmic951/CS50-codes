#include <stdio.h>
#define shekel 3.9;

int main(void)
{
    int suitcases;
    int extra_suitcases;
    char card_type;
    char flight_type;
    int month;
    float final_price;
    int passenger_num;
    printf("Enter the number of passengers (over 2 years old): \n");
    scanf("%d", &(passenger_num));

    if (passenger_num <=50 && passenger_num >= 1)
    {
        final_price = 800 * passenger_num;
    }
    else
    {
        printf("Input Error!\n");
        return 1;
    }

    printf("Enter the type of flight (O for one-way, T for round-trip): \n");
    scanf(" %c", &(flight_type));

    if (flight_type == 'T')
    {
        final_price = final_price + (passenger_num * 200);
    }
    else if (flight_type != 'O')
    {
        printf("Input Error!\n");
            return 1;
    }

    printf("Enter the flight month (number between 1 and 12): \n");
    scanf("%i", &(month));

    if (month >= 6 && month <= 8)
    {
        final_price = final_price + (passenger_num * 130);
    }
    else if (month >= 9 && month <= 11)
    {
        final_price = final_price + (passenger_num * 90);
    }
    else if (month >= 3 && month <= 5)
    {
        final_price = final_price + (passenger_num * 100);
    }
     else if (month > 12 || month < 1)
    {
        printf("Input Error!\n");
        return 1;
    }

    printf("Enter the card type (E for normal, B for business): \n");
    scanf(" %c", &card_type);

    if (card_type == 'B')
    {
        if (flight_type == 'T')
        {
            final_price = final_price + (1000 * passenger_num * 2);
        }
        else if (flight_type == 'O')
        {
            final_price = final_price + (1000 * passenger_num);
        }
    }
    else if (card_type != 'E')
    {
        printf("Input Error!\n");
        return 1;
    }

    printf("Enter total number of suitcases: \n");
    scanf("%i", &(suitcases));

    if (suitcases <= 100 && suitcases >= 0)
    {
        if (suitcases > passenger_num)
        {
            extra_suitcases = suitcases - passenger_num;
            if (flight_type == 'T')
            {
                final_price = final_price + (160 * extra_suitcases);
            }
            else if (flight_type == 'O')
            {
                final_price = final_price + (80 * extra_suitcases);
            }
        }
        else if (suitcases > 100 || suitcases < 0)
        {
            printf("Input Error!\n");
            return 1;
        }
    }

    final_price = final_price * shekel;
    printf("Total price in shekels: %2f\n", final_price);


    return 0;
}
