#include<stdio.h>
int strlen(char *str){
    int length;
    if(*str==0)return 0;
    for(length=0;*str;str++,length++);
    return length;
}
int main(){
    char str[]="";
    printf("%d\n",strlen(str));
}