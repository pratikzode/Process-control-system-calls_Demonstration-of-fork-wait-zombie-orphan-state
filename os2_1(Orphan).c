#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
 pid_t pid;
 int status;
 pid=fork();
 if(pid==-1)
 {
  printf("\nError");
 }
 else if(pid>0)
 {
   
  printf("\nParent Process");
  printf("\nChild Process Id: %d Parent Process Id:%d",getpid(),getppid());
  system("ps");
  
  
 }
 else
 {
 sleep(2);
  printf("\nChild Process");
  printf("\nChild Process Id: %d Parent Process Id:%d",getpid(),getppid());
 }
 return 0;
}


#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
 pid_t pid;
 int status;
 pid=fork();
 if(pid==-1)
 {
  printf("\nError");
 }
 else if(pid>0)
 {
   
  printf("\nParent Process");
  printf("\nChild Process Id: %d Parent Process Id:%d",getpid(),getppid());
  system("ps");
  
  
 }
 else
 {
 sleep(2);
  printf("\nChild Process");
  printf("\nChild Process Id: %d Parent Process Id:%d",getpid(),getppid());
 }
 return 0;
}
