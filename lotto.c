#include <stdio.h>
#define LOTTO_NUMBER 6

void main()
{
	int user_lotto[LOTTO_NUMBER];
	int answer_lotto[LOTTO_NUMBER];
	int count = 0;
	for(int i = 0; i < LOTTO_NUMBER; i++) //compare answer and user lotto number
	{
		for(int j  = 0; j < LOTTO_NUMBER; j++)
		{
			if(user_lotto[j] == answer_lotto[i])
			{
				count++;
			}
		}
	}
	switch(count){ //print rank and prize number 
		case 6 : 
			printf("you are 1, and prize money is ten million won\n");	
		case 5 :
			printf("you are 2, and prize money is five million won\n");
		case 4 :
			printf("you are 3, and prize money is two million won\n");
		case 3 : 
			printf("you are 4, and prize money is five thousand won\n");
		
		default : 
			printf("sorry,,,,\n");
	}
	printf("Good Job!!!!!\n");
}
	
