#include<stdio.h>
int main(){
    FILE* ip, *op;
    double max = -100000.0, tmp;
    ip=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\input.txt","r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\output.txt","w");
    if(!ip||!op){
        printf("파일 읽기 또는 쓰기 오류!\n");
        return 0;
    }
    for(;int cnt = fscanf(ip,"%lf",&tmp)>0;){
        if(max<tmp) max=tmp;
    }
    fprintf(op,"Max: %lf\n",max);
    fclose(ip),fclose(op);
}