#include<stdio.h>
int strlen_array(char a[]);
int strlen_plus(char* a);
int strlen_ptr(char* a);
int main(){
    char str[]="ABCDE";
    int i=0;
    for(i;str[i];i++);
    printf("main()--> %d\n",i);
    printf("array()--> %d\n",strlen_array(str));
    printf("plus()--> %d\n",strlen_array(str));
    printf("ptr()--> %d\n",strlen_array(str));
}
int strlen_array(char a[]){
    int i=0;
    for(i;a[i];i++);
    return i;
}
int strlen_plus(char* a){
    int i=0;
    for(i;*(a+i);i++);
    return i;
}
int strlen_ptr(char* a){
    int i=0;
    for(;*a;a++)
        i++;
    return i;
}