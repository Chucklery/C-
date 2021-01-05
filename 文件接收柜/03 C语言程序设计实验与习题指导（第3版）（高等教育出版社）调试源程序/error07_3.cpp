#include <stdio.h> 
int main(void)
{
    int a[6][6], i, j, m, n, sum;

    printf("Input m, n:");
    scanf("%d%d",&m,&n);
    printf("Input array:\n");
    for(i = 0; i < m; i++)          /* 调试时设置断点 */
        for(j = 0; i < n; j++)
            scanf("%d",&a[i][j]);
    sum = 0;                    /* 调试时设置断点 */
    for( i = 0; i < m; i++){   
        for( j = 0; j < n; j++)
            sum = sum + a[i][j];
        printf("sum of row %d is %d\n",i,sum);   /* 调试时设置断点 */
    }
    
    return 0;
}

