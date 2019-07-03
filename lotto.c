#include <stdio.h>
#include <time.h>

int save_log(int *num){


	FILE *fp = fopen("log.txt","a");	
	if(fp==NULL){
		perror("failed create file log.txt ");
		return 0;
	}

	fclose(fp);

	return 1;
}


int main(void)
{
	return 0;
}
