#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
    FILE *ip,*op;
    char str;
    ip=fopen(argv[1],"r");
    op=fopen(argv[2],"w");
    if(!ip||!op){printf("%d %d 파일 오류\n",ip,op); return 0;}
    for(;fscanf(ip,"%c",&str)>0;)
        fprintf(op,"%c",str);
    fclose(ip),fclose(op);
}