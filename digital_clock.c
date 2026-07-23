#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){
    time_t rawtime;
    struct tm *pTime;
    bool running = true;

    printf("DIGITAL CLOCK\n");

    while(running){
        time(&rawtime);
        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        fflush(stdout);
        
        sleep(1);
    }
    
}