#include<stdio.h>
int strcmp2(char* s, char* t);
int main(){
    char s[]= "ac";
    char t[]= "a";
    int result = strcmp2(s,t);
    printf("Â÷ÀÌ: %d\n",result);
}
int strcmp2(char* s, char* t){
    for(;*s==*t;s++,t++);
    return *s;
}