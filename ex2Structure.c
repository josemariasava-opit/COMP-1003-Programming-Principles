/*
Define a structure named Time with members hours, minutes, and seconds. 
Write a C program to input two times, add them, and display the result in proper 
time format.
*/
#include <stdio.h>

struct Time{
    int hours;
    int minutes;
    int seconds; 
};

int main(){ 
    // declare 3 structures 
    struct Time time1,time2,time_result; 

    // inout values for time1 
    printf("Input the first time (h m s): ");
    scanf("%d %d %d", &time1.hours,&time1.minutes,&time1.seconds);

    // input values for time2 
    printf("Input the second time (h m s): ");
    scanf("%d %d %d", &time2.hours,&time2.minutes,&time2.seconds);

    time_result.seconds = time1.seconds+time2.seconds;
    time_result.minutes = time1.minutes + time2.minutes; 
    time_result.hours = time1.hours + time2.hours + time_result.minutes / 60;
    
    time_result.minutes %= 60;
    time_result.seconds %= 60; 

    printf("\nResultant Time: %02d:%02d:%02d\n", time_result.hours, time_result.minutes, time_result.seconds);


    return 0; 
}

