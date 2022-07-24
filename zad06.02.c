#include <stdio.h>
#include <stdlib.h>

int main()
{   /*printf("vyvedete stoinost koqto iskate da vkarate v sinusa");
double num;


 scanf("%lf",&num);
    double sina=0.017;
    num=sina*num;
    printf("stoinosta e: %lf",num);
*/double input;
double pi;
double degree;
double sinx;
double powerseven;
double powerfive;
double powerthree;
input = 30;
pi=3.142;
degree= (input*pi)/180;

//printf("%lf",degree);

powerseven=(degree*degree*degree*degree*degree*degree*degree);
powerfive=(degree*degree*degree*degree*degree);
powerthree=(degree*degree*degree);
sinx = (degree - (powerthree/6) + (powerfive/120) - (powerseven/5040));
printf("%lf", sinx);
    return 0;
}
