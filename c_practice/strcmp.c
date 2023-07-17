#include<stdio.h>
#include<math.h>
int strcmp_arr(char a[], char b[]);
int strcmp_plus(char* a, char* b);
int strcmp_ptr(char* a, char* b);
int main(){
    char str[]="hongik";
    char str2[]="Hongik";
    int i;
    for(i=0;(str[i]==str2[i])&&(str[i]||str2[i]);i++);
    printf("main(): %d\n",str[i]-str2[i]);
    printf("arr(): %d\n",strcmp_arr(str,str2));
    printf("plus(): %d\n",strcmp_plus(str,str2));
    printf("ptr(): %d\n",strcmp_ptr(str,str2));
}
int strcmp_arr(char a[], char b[]){
    int i;
    for(i=0;(a[i]==b[i])&&(a[i]||b[i]);i++);
    return abs(a[i]-b[i]);
}
int strcmp_plus(char* a, char* b){
    int i;
    for(i=0;(*(a+i)==*(b+i))&&(*(a+i)||*(b+i));i++);
    return abs(*(a+i)-*(b+i));
}
int strcmp_ptr(char* a, char* b){
    for(;(*a==*b)&&(*a||*b);a++,b++);
    return abs(*a-*b);
}