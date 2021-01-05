#include <stdio.h>
int main(void)
{
    int m, n, j, k;   /* j表示最小公倍数，k表示最大公约数 */ 

    do{
        printf("Input m: ");
        scanf("%d", &m);
        printf("Input n: ");
        scanf("%d", &n);
    }while(m < 0 || n < 0);
j = m;
    while(j / n != 0)    /* 调试时设置断点 */
        j = j + m;
k = (m * n) / j;     /* 调试时设置断点 */
    printf("最大公约数是%d \n最小公倍数是%d\n ", k, j);

    return 0;
}

