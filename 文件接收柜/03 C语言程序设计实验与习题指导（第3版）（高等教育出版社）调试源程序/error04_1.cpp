#include <stdio.h>
int main(void)
{
    int m, n, j, k;   /* j��ʾ��С��������k��ʾ���Լ�� */ 

    do{
        printf("Input m: ");
        scanf("%d", &m);
        printf("Input n: ");
        scanf("%d", &n);
    }while(m < 0 || n < 0);
j = m;
    while(j / n != 0)    /* ����ʱ���öϵ� */
        j = j + m;
k = (m * n) / j;     /* ����ʱ���öϵ� */
    printf("���Լ����%d \n��С��������%d\n ", k, j);

    return 0;
}

