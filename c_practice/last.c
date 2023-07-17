// 문자열 마지막 단어 출력
#include<stdio.h>
char last_arr(char a[]);
char last_plus(char* a);
char last_ptr(char* a);
int main(){
    char a[]="hongik";
    int i;
    for(i=0;a[i];i++);
    printf("main(): %c\n",a[i-1]);
    printf("arr(): %c\n",last_arr(a));
    printf("plus(): %c\n",last_plus(a));
    printf("ptr(): %c\n",last_ptr(a));
}
char last_arr(char a[]){
    int i;
    for(i=0;a[i];i++);
    return a[i-1];
}
char last_plus(char* a){
    int i;
    for(i=0;*(a+i);i++);
    return *(a+i-1);
}
char last_ptr(char* a){
    for(;*a;a++);
    return *(a-1);
}