#include <stdio.h>
#include <math.h>
int main(void)
{
   	double a, b, c, d;

    printf("Enter a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b * b - 4 * a * c;     /* ����ʱ���öϵ� */
    if(a = 0){           
		if(b == 0){
			if(c == 0)
				printf("������Ϊ�㣬����������!\n");
    		    else
		        printf("a��bΪ0��c��Ϊ0�����̲�����\n");
        }
	    else
			printf("x = %0.2f\n", -c/b);
    }
    else
		if(d >= 0)        /* ����ʱ���öϵ� */
			printf("x1 = %0.2f\n", ( -b + sqrt(d)) / (2 * a));
			printf("x2 = %0.2f\n", ( -b - sqrt(d)) / (2 * a));
    		
		else{
			printf("x1 = %0.2f + %0.2fi\n", -b / (2 * a), sqrt(-d) / (2 * a));
    		    printf("x2 = %0.2f - %0.2fi\n", -b / (2 * a), sqrt(-d) / (2 * a));
		}

    return 0;          /* ����ʱ���öϵ� */
}

