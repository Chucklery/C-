#include<stdio.h> 
double result_real, result_imag;		/*  ȫ�ֱ��������ڴ�ź������  */

int main(void) 
{ 
	double imag1, imag2, real1, real2;		/* ����������ʵ���鲿���� */

	printf("Enter 1st complex number(real and imaginary): ");	
	scanf("%lf%lf", &real1, &imag1); 			/* �����1������ */
	printf("Enter 2nd complex number(real and imaginary): ");	
	scanf("%lf%lf", &real2, &imag2); 			/* �����2������ */
	complex_prod(real1, imag1, real2, imag2); 	/* ����֮�� */
	printf("product of complex is %f+%fi\n", result_real, result_imag); 
	
	return 0;
}

	/* ��������֮������ */
void complex_prod(double x1, y1, x2, y2);
{
	double result_real, result_imag;

	result_real = x1*x2 - y1*y2;    
	result_imag = x1*y2 + x2*y1;

	return result_real, result_imag;
}
