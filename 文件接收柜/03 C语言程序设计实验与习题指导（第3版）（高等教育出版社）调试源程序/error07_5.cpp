#include <stdio.h> 
int main(void)
{
    int i, k, temp;
    char str[];		

    printf("input a string: ");
    i = 0;
    while((str[i] = getchar( )) != '\n') 
        i++; 
    str[i] = '\0';
    k = i - 1;
    for(i = 0; i < k; i++){    /* 调试时设置断点 */
        temp = str[i];  
        str[i] = str[k];  
        str[k] = temp;
        k++;                  /* 调试时设置断点 */
    }           
    for(i = 0; str[i] != '\0'; i++)   
        putchar(str[i]);

    return 0;
}

