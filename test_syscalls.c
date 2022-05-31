#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
        for (int i = 0; i < 200; i++)
        {
                long int ret_status = syscall(i); // 385 is the syscall number

                if(ret_status == 0)
                        printf("System call %d executed correctly.\n", i);
                else
                        printf("System call %d did not execute as expected\n", i);
        }
        return 0;
}
