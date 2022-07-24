#include <stdio.h>
#include <stdlib.h>

int main()
{


    double count=1, sqroot=1,val;
     scanf("%lf",&val);
    while(sqroot<=val){
        count=count+0.001;
        sqroot=count*count;
    }
    printf("%lf",count);

    return 0;
}


