#include <stdio.h>
int main(void)   
{ 	
    int i, j, n, x, a[n];		

    printf("�������ݵĸ���n��");
    scanf("%d", &n);
    printf("����%d��������", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("����Ҫ�����������");
    scanf("%d", &x);
    for(i = 0; i < n; i++){
        if(x > a[i]) 
            continue;
        j = n - 1;
        while(j >= i){         /* ����ʱ���öϵ� */
            a[j] = a[j+1]; 
            j++;			   /* ����ʱ���öϵ� */
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

