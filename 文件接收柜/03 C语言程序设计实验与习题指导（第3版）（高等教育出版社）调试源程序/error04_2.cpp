#include<stdio.h>
int main(void)
{
    int flag,n;
    double eps,item,s;

    printf("Input eps: ");
    scanf("%lf",&eps);
    flag = 1;
    s = 0;
    n = 1;
    do{
        item = 1/ n;
        s = s + flag * item;  
        flag = -flag;
        n = n + 3;
    }while( item < eps);
    printf( "s = %f\n",s);

    return 0;
}

