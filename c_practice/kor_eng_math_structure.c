#include<stdio.h>
struct grade{
    char name[20];
    int kor, eng, math, sum;
    double avg;
};
struct grade compute(struct grade st){
    st.sum = st.kor+st.math+st.eng;
    st.avg=st.sum/3.0;
    return st;
}
void compute_sum(struct grade *st){
    st->sum=st->kor+st->eng+st->math;
    st->avg=st->sum/3.0;
};
int main(){
    struct grade st[3]={{"KIM",80,90,100},{"LEE",50,60,70},{"PARK",20,30,40}};
    for(int i=0;i<3;i++)
        st[i]=compute(st[i]);
    for(int i=0;i<3;i++)
        printf("%s %d %d %d %d %lf\n",st[i].name,st[i].kor,st[i].eng,st[i].math,st[i].sum,st[i].avg);
    for(int i=0;i<3;i++)
        compute_sum(st+i);
    for(int i=0;i<3;i++)
        printf("%s %d %d %d %d %lf\n",st[i].name,st[i].kor,st[i].eng,st[i].math,st[i].sum,st[i].avg);
}