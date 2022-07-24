#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define TCHAR 1
#define TDOUBLE 2
#define TINT 3
#define TUINT8_T 4
#define TUINT16_T 5
#define TUINT32_T 6
#define TUINT64_T 7

void printValue(const void* valuePtr, uint8_t flag){
if(flag ==1 ){
printf("value:%c",*(char*)valuePtr);
}
if(flag ==2 ){
printf("value:%lf",*(double*)valuePtr);
}
if(flag ==3 ){
printf("value:%d",*(int*)valuePtr);
}
if(flag ==4 ){
printf("value:%d",*(uint8_t*)valuePtr);
}
if(flag ==5 ){
printf("value:%d",*(uint16_t*)valuePtr);
}
if(flag ==6 ){
printf("value:%d",*(uint32_t*)valuePtr);
}
if(flag ==7 ){
printf("value:%ld",*(uint64_t*)valuePtr);
}
}

int main(){
    int num=23;
    printValue(&num,TUINT8_T);
    return 0;
}