#include <stdio.h>
#include <math.h>

int main(){
    double L;
    double O;
    double R;
    double H;
    printf("include lenght");
    scanf("%lf",&L);
    printf("include radius");
    scanf("%lf",&R);
    printf("include height");
    scanf("%lf",&H);
    O=L*acos(((R-H)/R)*R*R)-(R-H)*sqrt(2*R*H-H*H);
    printf("obemyt e:%.2lf",O);

    return 0;
}