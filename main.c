#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_handler(int signum)
{
    if (signum == SIGINT){
        printf("\e[1;1H\e[2J");
        printf("\nCaught %d\nU can go KYS btw...\n\n\nrly.\n", signum);
    }
}

int main(void)
{
    if (signal(SIGINT, sig_handler) == SIG_ERR)
    printf("Can't catch signal");
    
    while (1)
        sleep(1);
    return 0;
}

