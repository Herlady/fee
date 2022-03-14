/*
Payroll system
created by Fidelis Mbugua
on March 8,2022
MIT license
C99
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name [100],kra[20];
    int hours,overtime,gross,tax,net;
    printf("Wanjiku's Fatory Payroll/n");
    //capture input
    printf("Enter name");
    gets(name);
    printf("Hours worked");
    scanf("d%",&hours);
    //computation
    if(hours>40){
        overtime =(hours - 40)* 1.5 * 1000;
        gross= overtime +(40 * 1000);
    }
    else{
        overtime=0;
        gross= hours * 1000;
    }
    tax =0.3 * gross;
    net =gross - tax;
    //output
    printf("Employee name: %s/n",name);
    printf("Gross Income: %/n",gross);
    printf("Tax paid: %d/n",tax);
    printf("Net Income: %d/n",net);
    return 0;
}
