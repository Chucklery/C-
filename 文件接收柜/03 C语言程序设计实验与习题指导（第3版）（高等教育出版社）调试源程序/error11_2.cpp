#include <stdio.h>
#include <stdlib.h>
char * change(char *s[ ], int n);
int main(void)
{  
  int i,n;
  char poem[8][20], *p[8];

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%s",poem[i]);
    p[i] = poem[i];
  }
  printf("%s\n", change(p, n));

  return 0;
}
char * change(char *s[ ], int n)
{
  int i;
  char *t = (char *)malloc(9 * sizeof(char));
  for(i = 0; i < n; i++)
    t[ i ] = s[i][0];
  t[i]='\0';
  return t;
}
