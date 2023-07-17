// 백터의 내적 다른 버전으로
#include<stdio.h>
void vdot_array(int a[], int b[], int result[]);
void vdot_plus(int* a, int* b, int* result);
void vdot_ptr(int* a, int* b, int* result);
int main(){
    int a[]={1,2,3};
    int b[]={4,5,6};
    int result[]={0};
    /*
    for(int i=0;i<3;i++){
        result[i]=a[i]*b[i];
    }
    printf("%d %d %d\n",result[0],result[1],result[2]);
    
    vdot_array(a,b,result);
    printf("%d %d %d\n",result[0],result[1],result[2]);
    
    vdot_plus(a,b,result);
    printf("%d %d %d\n",result[0],result[1],result[2]);
    */
    
    vdot_ptr(a,b,result);
    printf("%d %d %d\n",result[0],result[1],result[2]);
}
void vdot_array(int a[], int b[], int result[]){
    int i;
    for(i=0;i<3;i++)
        result[i]=a[i]*b[i];
}
void vdot_plus(int* a, int* b, int* result){
    int i;
    for(i=0;i<3;i++)
        *(result+i)=*(a+i)**(b+i);
}
void vdot_ptr(int* a, int* b, int* result){
    for(;*a||*b;){
        *result=*a**b;
        result++,a++,b++;
    }
}