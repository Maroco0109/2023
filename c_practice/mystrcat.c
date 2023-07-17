#include<stdio.h>
void mystrcat_arr(char a[], char b[]);
void mystrcat_plus(char* a, char* b);
void mystrcat_ptr(char* a, char* b);
int main(){
    char a[100]="hongik";
    char b[]="Univ";
    int i,j;
    for(i=0;a[i];i++);
    for(j=0;b[j];i++,j++){
        a[i]+=b[j];
    }
    printf("main(): %s\n",a);
    mystrcat_arr(a,b);
    printf("arr(): %s\n",a);
    mystrcat_plus(a,b);
    printf("plus(): %s\n",a);
    mystrcat_ptr(a,b);
    printf("ptr(): %s\n",a);
}
void mystrcat_arr(char a[], char b[]){
    int i,j;
    for(i=0;a[i];i++);
    for(j=0;a[i]=b[j];i++,j++);
}
void mystrcat_plus(char* a, char* b){
    int i,j;
    for(i=0;*(a+i);i++);
    for(j=0;*(a+i)=*(b+j);i++,j++);
}
void mystrcat_ptr(char* a, char* b){
    for(;*a;a++);
    for(;*a=*b;a++,b++);
}