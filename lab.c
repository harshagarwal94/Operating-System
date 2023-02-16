1.	Process Creation
   
     #include <stdio.h> 
#include <sys/types.h>
#include <unistd.h> 
int main()
{
pid_t pid;
pid = fork();
if (pid == 0)
{
printf("i am the child process");
}
else if (pid > 0)
{
printf("I’m the parent process. My child pid is %d", pid);
}
else
perror("error in fork");
return 0;
}
2.	Calculate number of times hello is printed.

#include <stdio.h> 
#include <sys/types.h> 
int main() 
{ 
    fork(); 
    fork(); 
    fork(); 
    printf("hello\n"); 
    return 0; 
}
3.	Predict the Output of the following program

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
void forkexample() 
{ 
    // child process because return value zero 
    if (fork() == 0) 
        printf("Hello from Child!\n"); 
  
    // parent process because return value non-zero. 
    else
        printf("Hello from Parent!\n"); 
} 
int main() 
{ 
    forkexample(); 
    return 0; 
}


