#include <stdio.h>
#include <math.h>

int main(){
int a;
int b;
int d;
int k;
int sum=0;
int absum=1;
printf("vyvedete stoinosti s 0 i 1 za promenlivite a i b:");
scanf("%d",&a);
scanf("%d",&b);
do{
d=a%10;
a=a/10;
k=b%10;
b=b/10;
if(d==0 && k==0){
sum=0;
}
else if(d==1 &&k==0){
    sum=1;
}
else if(d==0 &&k==1){
    sum=1;
}
else if(d==1 &&k==1){
    sum=1;
}

absum=sum+absum*10;
}

while(a!=0 || b!=0);
absum=absum/10;
printf("%d",absum);
    return 0;
}