#include <stdio.h>
#include <math.h>

int main(){
int a;
int b;
int c;
int max;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b){
max=a;
}else if(a<b){
max=b;
}
if(max<c){
    max=c;
}

printf("%d",max);
    return 0;
}