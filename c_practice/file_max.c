#include<stdio.h>
int main(){
    FILE* fp, *op;
    double max=-1000000.0, tmp;
    fp=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\input.txt", "r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\output.txt", "w");
    for(;int cnt=fscanf(fp,"%lf",&tmp);){
        if(cnt<=0)  break;
        printf(" %lf ",tmp);
        if(tmp>max) max=tmp;
    }
    fprintf(op,"Max: %lf\n",max);
    fclose(fp);
    fclose(op);

    return 0;
}