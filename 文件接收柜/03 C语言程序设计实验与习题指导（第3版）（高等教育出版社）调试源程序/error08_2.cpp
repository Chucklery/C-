#include <stdio.h>
void mov(int *x, int n, int m);
int main(void)
{
	int a[80], i, m, n, *p;
	
	printf("Input n, m:");
	scanf("%d%d",&n,&m);
	for(p = a, i = 0; i < n; i++)
		scanf("%d", &p++);
	mov(a,n,m);
	printf("After moved: ");
	for(i = 0; i < n; i++)
		printf("%5d",a[i]);

	return 0;
}
void mov(int *x, int n, int m)
{
	int i,j,k;
	for(i = 0; i < m; i++){				

		for(j = n-1; j > 0; j--)
			x[j] = x[j - 1]; 		
		x[0] = x[n - 1]; 
	}
}
