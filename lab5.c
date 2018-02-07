#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
/*int main()
{
   int input;
   do{
     printf("a. ls\nb. ps\nc. who\nq. exit\n");
     input = getchar();
     
   } while(input != 'q');   

   printf("Hello, World!\n");
   return 0;
}*/

int main() { //lab5q2.c
/*10*/ pid_t cpid;
/*20*/ pid_t gcpid;
/* fork another process */
/*30*/ cpid = fork();
	 if (cpid == 0) { /* child process */
/*50*/ 	gcpid = fork();
/*60*/ 	if (gcpid > 0) {
/*70*/ 		printf("Can you see this2 Grand Child?\n");
/*80*/ 		exit(0);
/*90*/ 	} //grandchild
/*100*/ execlp("/bin/sdfgsdfgls", "lsdfgsdfgsdfg", NULL); /* A */
		
/*110*/ printf("can you see this1 Child?\n"); /* B */
/*120*/ } 
/*130*/  /* parent process */
 /* parent will wait for the child to complete */
/*140*/ printf("can you see this1? Parent\n"); /* C */
/*150*/ wait (NULL); printf ("Child Complete\n");
/*160*/ exit(0);
	

}
