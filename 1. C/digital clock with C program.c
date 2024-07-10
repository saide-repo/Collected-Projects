// digital clock with C program

#include <stdio.h>
#include <unistd.h>

void clear_screen() {
    printf("\033[H\033[J");
    // for clearing screen
}

int main()
{
    int hour, minute, second;
    hour = minute = second = 0;
    
    while (1) {
        clear_screen();
        printf("%02d : %02d : %02d\n", hour, minute, second);
        fflush(stdout);

        sleep(1);

        second++;

        if (second == 60) {
            minute++;
            second = 0;
        }
        
        if (minute == 60) {
            hour++;
            minute = 0;
        }

        if (hour == 24) {
            hour = 0;
            minute = 0;
            second = 0;
        }
    }
    return 0;
}
