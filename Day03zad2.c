#include <stdio.h>
#include <math.h>

int main(){
float a;
float b;
scanf("%f",&a);
scanf("%f",&b);

if(a==b){
printf("true\n");
}
else{
    printf("false\n");
}
if(a-b>8.854*pow(10,-12)){
   printf("true\n"); 
}else{
    printf("false\n");
}
for(int i=0;i<b;i++){
    b=b+0.1;
}
for(int i=0;i<b;i++){
    b=b-0.1;
}
if(a==b){
    printf("true\n");
}else{
    printf("false\n");
}
if(a-b>8.854*pow(10,-12)){
   printf("true\n"); 
}else{
    printf("false\n");
}


    return 0;
}