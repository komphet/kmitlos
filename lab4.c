#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#define clear_buffer() while(getchar() != '\n')
int main() {
  pid_t pid,gid;
  int i,parent,child,gchild,gcount;
  pid = fork();
  if(pid){
  	gid = fork();
  	for (int i = 0; i < 5; ++i)
	{
		// printf("parent %d, child %d, grandchild %d\n",parent,i,0);
		gchild = (i%2 == 0) ? 3 : 4;
		for (int j = 0; j < gchild; ++j)
		{
			printf("parent %d, child %d, grandchild %d\n",parent,i,j );
		}
	}
  }
  
  return 0;
}
