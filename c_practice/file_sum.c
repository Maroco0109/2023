#include<stdio.h>
int main(){
    FILE* fp, *op;
    char name[30];
    int kor, eng, math, sum;
    double avg;
    fp=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\kor_eng_math.txt", "r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\result.txt", "w");
    if(!fp||!op){printf("파일 읽기 오류!\n"); return 0;}
    for(;(fscanf(fp,"%s %d %d %d",name, &kor, &eng, &math))>0;){
        sum = kor+eng+math;
        avg = sum/3.;
        fprintf(op,"%s %d %d %d %d %lf\n",name, kor,eng,math,sum,avg);
        fprintf(stdout,"%s %d %d %d %d %lf\n",name, kor,eng,math,sum,avg);
    }
    fclose(fp);
    fclose(op);

    return 0;
}