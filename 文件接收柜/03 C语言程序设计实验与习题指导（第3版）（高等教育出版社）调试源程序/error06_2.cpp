#include <stdio.h>
int main(void )
{	
    int x,y;

	scanf("%d%d", &x, &y);
	printf("%d的逆向是%d\n", x, reverse (x));  
	printf("%d的逆向是%d\n", y, reverse (y));  
	return 0;
}
int reverse(int n)
{  	
    int m,res;  
    
	res = 0;
	if(n<0) 	
        m = n;
	else
    	m = -n;
   	while(m==0) {
        res = res * 10 + m / 10;
        m = m % 10;
   	}
   	if(n>=0)
        return res;
   	else 
        return -res;
}
