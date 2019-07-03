#include <stdio.h>
#include <time.h>

int save_log(int *num){

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
	FILE *fp = fopen("log.txt","a");

	if(fp==NULL){

		perror("failed create file log.txt ");
		return 0;
	}

	fprintf(fp,"%d-%d-%d : ", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

	for(i=0;i<6;i++){
		fprintf(fp,"%d ",num[i]);
	}
	fprintf(fp,"\n======================\n");

	fclose(fp);

	return 1;
}


int main(void)
{
	return 0;
}
