#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int main()
{
	int num;
	double avg = 0.0;
	int sum = 0;
	int count = 1;

	for(int i = 0 ; i < 100 ; i++) printf("\n");
	printf("=======================================\n");
	printf("Welcome to AVG program\nCreated By MR.KOMPHET MEESAB, Student Id: 59050176\nFaculty of Science, KMITL\n");
	printf("=======================================\n");	
	for(int i = 0 ; i < 10 ; i++) printf("\n");
	do{
		printf("Enter Number (Exit please enter 0): ");
		scanf ("%d",&num);
		if(num > 0){
			
			for(int i = 0 ; i < 100; i++) printf("\n");
			sum += num;
			avg = (double) (sum)/count;
			count ++;
			printf("AVG: %.2f ( sum = %d, count = %d) \n",avg,sum,count-1);
			for(int i = 0 ; i < 10 ; i++) printf("\n");
		}
	}while(num > 0);

	for(int i = 0 ; i < 100 ; i++) printf("\n");
	printf("=======================================\n");
	printf("AVG: %.2f, SUM: %d \n",avg,sum);
	printf("=======================================\n");
	for(int i = 0 ; i < 10 ; i++) printf("\n");
	return 0;
}

