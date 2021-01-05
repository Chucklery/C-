#include <stdio.h>
int main(void)   
{ 	
    int i, j, n, x, a[n];		

    printf("输入数据的个数n：");
    scanf("%d", &n);
    printf("输入%d个整数：", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("输入要插入的整数：");
    scanf("%d", &x);
    for(i = 0; i < n; i++){
        if(x > a[i]) 
            continue;
        j = n - 1;
        while(j >= i){         /* 调试时设置断点 */
            a[j] = a[j+1]; 
            j++;			   /* 调试时设置断点 */
        }                   
        a[i] = x;
        break;
    }
    if(i == n)  
        a[n] = x;
    for(i = 0; i < n + 1; i++)
        printf("%d ", a[i]);
    putchar('\n');      
      
    return 0;
}

