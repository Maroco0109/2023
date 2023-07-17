#include<stdio.h>
#include<stdlib.h>
void strcpy_array(char a[], char b[]);
void strcpy_plus(char* a, char* b);
void strcpy_ptr(char* a, char* b);
int main(){
    char str[]="ABCDE";
    char *result;
    result =(char*)malloc(100);
    int i=0;

    for(i;str[i];i++)
        result[i]=str[i];
    printf("main()-->%s\n",result);
    *result = 'x';
    strcpy_array(str,result);
    printf("array()-->%s\n",result);
    *result = 'x';
    strcpy_plus(str,result);
    printf("plus()-->%s\n",result);
    *result = 'x';
    strcpy_ptr(str,result);
    printf("ptr()-->%s\n",result);
    *result = 'x';
}
void strcpy_array(char a[], char b[]){
    int i=0;
    for(i;a[i];i++)
        b[i]=a[i];
}
void strcpy_plus(char* a, char* b){
    int i=0;
    for(i;*(a+i);i++)
        *(b+i)=*(a+i);
}
void strcpy_ptr(char* a, char* b){
    for(;*a;a++,b++)
        *b=*a;
}