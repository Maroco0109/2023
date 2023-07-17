#include<stdio.h>
struct complex{double real, img;};
struct complex add(struct complex *a, struct complex *b){
    struct complex result;
    result.real=a->real+b->real;
    result.img=a->img+b->img;
    return result;
}
int main() { struct complex result, a={1.,1.}, b={2.,2.} ;
 result = add(&a,&b);
 printf("add result = %f + %f i \n", result.real, result.img ) ;}