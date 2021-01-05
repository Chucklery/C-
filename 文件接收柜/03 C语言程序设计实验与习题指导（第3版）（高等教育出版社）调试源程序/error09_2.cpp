#include <stdio.h>
int main (void)
{  struct students{
		 int number;
		 char name[20];
		 int score[3];
		 int sum;
   };						
   int i, j, k, n, max=0;
   printf("n=");
   scanf("%d",&n);
   for (i = 0; i < n; i++){
 	  scanf("%d%s", &student[i].number, student[i].name); 

	  for(j = 0; j < 3; j++){
	 	scanf("%d", &student[i].score[j]);  
		student[i].sum += student[i].score[j];  
	 }
   }
   k = 0;  max = student[0].sum;
   for(i = 1; i < n; i++)
 	  if(max < student[i].sum) { 
	     k = i;

  	  }
   printf("总分最高的学生是: %s，%d分\n", student[k].name, student[k].sum);
   return 0;
}
