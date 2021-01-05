#include <stdio.h>
int is( int number );
int main(void)
{
    int count, i, sum;   

    count = 0;
    sum = 0;
    for ( i = 100; i <= 999; i++) 
        if ( is ( i ) = 1 ) {
            count++;
            sum = sum + i;
        }
    printf("count = %d, sum = %d\n", count,sum);

    return 0;
}
int is( int number )
{
    int a, b, c, result, sum;
    a = number / 100;
    b = ( number /10 ) / 10;
    c = number % 10;
    sum = a + b + c;
    if (sum == 5 )
        result = 1;
    else
        result = 0;

}

