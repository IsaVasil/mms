#include <stdio.h>
#include <math.h>
int main(){
    double mass;
    double BMI;
    double height;
    printf("include mass");
    scanf("%lf",&mass);
    printf("include height");
    scanf("%lf",&height);
   
BMI=1.3*(mass/(height*height*(height*0.5)));
    printf("%lf",BMI);
   
    return 0;
}
