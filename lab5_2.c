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
     			exit();
     		}
     		break;
     }
     
   } while(input != 'q');   

   printf("Hello, World!\n");
   return 0;
}