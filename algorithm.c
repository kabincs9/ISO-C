#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[7]; // not mention so not found 
    int n = get_int("Number: ");
    // what ever type in
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)// is that number equal to that
        {
            printf("Found\n");
            return 0;

        }


    }
        printf("Not Found\n");
        return 1;
}
