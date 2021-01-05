#include <stdio.h>
int main(void)
{
    int i, j, s = 1;

    for(i = 1; i <= 200; i++) { 

        for(j = 2; j <= i / 2; j++) 
            if(i / j == 0) 
                s = s + j; 
            if(s == i) { 
                printf("%d = 1", i); 
                for(j = 2; j <= i / 2; j++) 
                    if(i / j == 0)  printf(" + %d", j); 
                printf("\n");
            }
    }

    return 0;
}

