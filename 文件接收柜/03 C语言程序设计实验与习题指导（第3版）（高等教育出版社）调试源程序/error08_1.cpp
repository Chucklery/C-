#include <stdio.h>
int main(void)
{	
	int max, x, y, *pmax, *px, *py; 

	scanf("%d%d",&x,&y);	 
	*px = &x;					/* �ֱ��px��py��pmax����ָ����и�ֵ*/
	*py = &y;					/* ����ֱ�ָ��x��y��max��������*/
	*pmax = &max;				/* ���У�max��������x��y�нϴ�ı���*/
    *pmax = *px;				/* ����ʱ���öϵ� */
	if(pmax < py)	
		pmax = py; 
	printf("max = %d\n",max); 
	
	return 0;
} 
