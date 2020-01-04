#include <stdio.h>

int main()
{
    int total = 0, num1 = 1, num2 = 2, temp;
    do
    {
        if(!(num1 % 2))
            total = total + num1;   
        temp = num2;
        num2 = num2 + num1;
        num1 = temp;
        //printf("%i, ", num1);
    } while (num1 < 4000000);
    printf("%i", total);

    return 0;
}