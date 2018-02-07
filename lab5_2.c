#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
   int input;
   pid_t cpid;
   do{
	 printf("=================================================\n");
     printf("a. ls\nb. ps\nc. who\nq. exit\n");
     input = getchar();
     
     switch(input){
     	case 'a': 
     		cpid = fork();
     		if(cpid == 0){
     			execlp("/bin/ls", "ls", NULL);
     			break;
     			exit(0);
     		}
     		
     	case 'b': break;
     	case 'c': break;
     	case 'q': 
     		exit(0);
			break;
     	default:
     		printf("You are idiot!!! WTFFFFF!!! Just read command idiot!!\n");
     }
     wait(NULL);
     printf("=================================================\n");
   } while(input != 'q');   

   printf("Buy~~~~~!\n");
   return 0;
}