#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define clear_buffer() while (getchar() != '\n')
int main()
{
   int input;
   pid_t cpid;
   do{
		 printf("=================================================\n");
	     printf("a. ls\nb. ps\nc. who\nq. exit\n");
	     input = getchar();
	     clear_buffer();
	     
	     switch(input){
	     	case 'a': 
	     		cpid = fork();
	     		if(cpid == 0){
	     			execlp("/bin/ls", "ls", NULL);
	     			exit(0);
	     		}
	     		break;
	     	case 'b':
	     		cpid = fork();
	     		if(cpid == 0){
	     			execlp("/bin/ps", "ps", NULL);
	     			exit(0);
	     		}
	     		break;
	     	case 'c': 
	     		cpid = fork();
	     		if(cpid == 0){
	     			execlp("/bin/who", "who", NULL);
	     			exit(0);
	     		}
	     		break;
	     	case 'q': 
				break;
	     	default:
	     		printf("You are idiot!!! WTFFFFF!!! Just read command idiot!!\n");
	     }
	     wait(NULL);
	 
   } while(input != 'q');   

   printf("Bye~~~~~!\n");
   return 0;
}