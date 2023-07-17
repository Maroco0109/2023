#include<stdio.h>
#include<stdlib.h>
int main(){
    char* str;
    str=(char*)malloc(100);
    scanf("%s",str);
    printf("Input: %s",str);
    free(str);
}