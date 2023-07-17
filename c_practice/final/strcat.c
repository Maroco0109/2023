#include<stdio.h>
void mystrcat(char s[], char t[]);
void mystrcat2(char* s, char* t);
int main(){
    char s[10]="abc";
    char t[]="de";
    char s1[10]="ABC";
    char t1[]="DE";
    mystrcat(s,t);
    printf("%s\n",s);
    mystrcat2(s1,t1);
    printf("%s\n",s1);
}
void mystrcat(char s[], char t[]){
    int i,j;
    for(i=0;s[i];i++);
    for(j=0;t[j];i++,j++){
        s[i]=t[j];
    }
}
void mystrcat2(char* s, char* t){
    for(;*s;s++);
    for(;*t;s++,t++)
        *s=*t;
}