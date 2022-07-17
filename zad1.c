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
BMI=mass/(height*height);
    printf("%lf",BMI);
   
    return 0;
}