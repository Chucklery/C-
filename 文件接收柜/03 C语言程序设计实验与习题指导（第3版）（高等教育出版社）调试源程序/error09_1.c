#include <stdio.h>
int main (void )
{	
    struct emp{
        char  name[10];
        float jbgz;  
        float fdgz;   
        float zc;
    };
 	emp s[10];
    int i, n;

    printf("n=");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%s%f%f%f", s[i].name, s[i].&jbgz, s[i].&fdgz, s[i].&zc);
    for (i = 0; i < n; i++)  /* 调试时设置断点 */
        printf ("%s实发数：%.2f\n", s[i].name, s[i].jbgz+s[i].fdgz-s[i].zc);

    return 0;
} 
