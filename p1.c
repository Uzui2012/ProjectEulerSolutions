#include <stdio.h>

int main()
{
    int total = 0;
    for (int i = 1; i < 1000; i++){
        if( !(i % 3) || !(i % 5) ){
            //printf("%i, ", i);
            total = total + i;
        }
    }
    printf("%i", total);
    return 0;
}