#include <stdio.h>
int main(void)
{
   int n;
   double x, result;

   printf("Enter n, x: ");
   scanf("%d%lf", &n, &x);
   result = p(n,x);
   printf("P(%d,%.2lf) = %.2lf\n", n, x, result);

   return 0;
}

double p(int n, double x)
{
   p(n,x)  =  ((2 * n - 1) * p(n - 1,x) - (n - 1) * p(n - 2,x)) / n;

   return p(n,x);
}
