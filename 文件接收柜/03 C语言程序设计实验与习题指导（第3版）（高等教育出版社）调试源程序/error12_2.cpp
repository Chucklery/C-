#include <stdio.h>
#include <stdlib.h>
int main(void) 
{			
	FILE  fp;		
	int n,sum;			
	
    if((fp = fopen("Int_Data.dat", "r")) == NULL){ 	
		printf("Can't Open File!");
		exit(0);
	}
	while(fscanf(fp, "%d", &n) == EOF) 	
		sum = sum + n;
	
	fprintf(fp, " %d", sum);
	fclose(fp);

	return 0;
}
