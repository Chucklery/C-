#include <stdio.h> 
int main(void)
{
    int a[6][6], b[6][6], i, j, m, n;

    printf("Input m, n:");
    scanf("%d%d",&m,&n);
    printf("Input array:\n");
    for(i = 0; i < m; i++)          
        for(j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    for(i = 0; i < m; i++)          
        for(j = 0; j < n-1; j++)
            b[i][j] = a[i][j];
    for(i = 0; i < n; i++)
	        b[i][0] = a[i][n];
    printf("New array:\n");
    for( i = 0; i < m; i++)   
        for( j = 0; j < n; j++)
            printf("%4d",b[i][j]);
        printf("\n");   

    return 0;
}

