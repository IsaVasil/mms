#include <stdio.h>

int main(){
    double O;
    double R;
    double H;
    printf("include radius");
    scanf("%lf",&R);
    printf("include height");
    scanf("%lf",&H);
    O=2*R*H;
    printf("obemyt e:%.2lf",O);

    return 0;
}