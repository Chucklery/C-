#include <stdio.h>
int main(void)
{	
	int max, x, y, *pmax, *px, *py; 

	scanf("%d%d",&x,&y);	 
	*px = &x;					/* 分别对px、py和pmax三个指针进行赋值*/
	*py = &y;					/* 让其分别指向x、y和max三个变量*/
	*pmax = &max;				/* 其中，max用来保存x、y中较大的变量*/
    *pmax = *px;				/* 调试时设置断点 */
	if(pmax < py)	
		pmax = py; 
	printf("max = %d\n",max); 
	
	return 0;
} 
