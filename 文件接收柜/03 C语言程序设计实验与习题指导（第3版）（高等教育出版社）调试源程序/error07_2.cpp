#include <stdio.h>
int main(void)
{
    int i, x, n;
    int a[10];

    printf("输入数组元素的个数：");
    scanf("%d", &n);
    printf("输入数组%d个元素：", n);
    for(i = 0; i < n; i++)
        scanf("%d", a[i]);
    printf( "输入x：" );    
    scanf("%d", &x);	
  	for(i = 0; i < n; i++)	 
        if(a[i] != x)  break;	
    if(i != n)
        printf( "没有找到与%d相等的元素!\n", x);
    else
        printf( "和%d相同的数组元素是a[%d] = %d\n", x, i, a[i]); 

    return 0;
}

