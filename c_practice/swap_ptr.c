#include<stdio.h>
void swap(int *a, int *b, int size);
int main(){
    int a[] = {1,2,3};
    int b[] = {4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    swap(a,b, size);
    printf("a: %d%d%d\n",a[0],a[1],a[2]);
    printf("b: %d%d%d\n",b[0],b[1],b[2]);
}
void swap(int *a, int *b, int size){
    int tmp = 0;
    for(int i = 0; i< size;i++){
        tmp = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = tmp;
    }
}