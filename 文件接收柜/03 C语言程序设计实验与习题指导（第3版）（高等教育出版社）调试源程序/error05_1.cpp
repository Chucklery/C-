#include<stdio.h> 
double result_real, result_imag;		/*  全局变量，用于存放函数结果  */

int main(void) 
{ 
	double imag1, imag2, real1, real2;		/* 两个复数的实、虚部变量 */

	printf("Enter 1st complex number(real and imaginary): ");	
	scanf("%lf%lf", &real1, &imag1); 			/* 输入第1个复数 */
	printf("Enter 2nd complex number(real and imaginary): ");	
	scanf("%lf%lf", &real2, &imag2); 			/* 输入第2个复数 */
	complex_prod(real1, imag1, real2, imag2); 	/* 求复数之积 */
	printf("product of complex is %f+%fi\n", result_real, result_imag); 
	
	return 0;
}

	/* 定义求复数之积函数 */
void complex_prod(double x1, y1, x2, y2);
{
	double result_real, result_imag;

	result_real = x1*x2 - y1*y2;    
	result_imag = x1*y2 + x2*y1;

	return result_real, result_imag;
}
