#include<stdio.h>
int main(){
    char name[20] = "hong";
    char myname[20] = "kang";
    for(int i=0;myname[i];i++)
        name[i]=myname[i];
    printf("%s\n",name);
}