#include<stdio.h>
typedef struct complex{
    double real, img;
} Complex;
Complex add(Complex a, Complex b){
    Complex result;
    result.real = a.real+b.real;
    result.img = a.img+b.img;
    return result;
}
struct complex add2(struct complex a, struct complex b){
    struct complex result;
    result.real = a.real+b.real;
    result.img = a.img+b.img;
    return result;
}
void add_ptr(Complex *a, Complex *b, Complex *result){
    result->real = a->real+b->real;
    result->img = a->img+b->img;
}
void add_ptr2(struct complex a[], struct complex b[], struct complex result[]){
    result[0].real=a[0].real+b[0].real;
    result[0].img = a[0].img+b[0].img;
}
int main(){
    Complex result, presult, a={1.,1.},b={2.,2.};
    result = add2(a,b);
    add_ptr2(&a, &b,&presult);
    printf("add: %lf + %lfi\n",result.real,result.img);
    printf("ptr: %lf + %lfi\n",presult.real,presult.img);
}