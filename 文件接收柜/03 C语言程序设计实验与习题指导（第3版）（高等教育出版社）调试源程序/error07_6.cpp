#include <stdio.h>     
#include <string.h>
int main(void)
{
    int i, s;
    char str[80];

    i = 0;
    while((str[i] = getchar( )) != "\n") 
        i++; 
    str[i] = '\0';
    for(i = 0; i < 80; i++)
        if(str[i] <= '0' || str[i] >= '9')
            s = s * 10 + str[i];
    printf("%d\n",s);

    return 0;
}

