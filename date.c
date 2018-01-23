#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
//    struct date d;
//    time_T current_time;
//    char *c_time_string;
//    current_time=time(NULL);
//    c_time_string=ctime(&current_time);
//    getdate(&d);
//    printf("%d/%d/%d %s",d.da_day,d.da_mon,d.da_year,c_time_string);
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("now: %d-%d-%d %d:%d:%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,   tm.tm_hour, tm.tm_min, tm.tm_sec);
    return 0;
}