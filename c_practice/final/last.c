#include<stdio.h>
char last(char* s){
    if(s==""||s==0)
        return 0;
    for(;*s;s++);
    return *(s-1);
}
int main(){
    char c[]="";
    printf("%c\n",last(c));
}