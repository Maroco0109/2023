#include<stdio.h>
void add_matrix(int a[][2], int b[][2], int result[2][2]){
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j] = a[i][j]+b[i][j];
        }
    }
}
void matrix_trans(int a[][2], int result[2][2]){
    result[0][0]=a[0][0];
    result[1][0]=a[0][1];
    result[0][1]=a[1][0];
    result[1][1]=a[1][1];
}
int main(){
    int a[][2] = {1,2,3,4};
    int b[][2] = {5,6,7,8};
    int result[2][2];
    int result_trans[2][2];

    add_matrix(a,b,result);
    printf("%d %d\n%d %d\n",result[0][0],result[0][1],result[1][0],result[1][1]);
    
    matrix_trans(a,result_trans);
    printf("%d %d\n%d %d\n",result_trans[0][0],result_trans[0][1],result_trans[1][0],result_trans[1][1]);
}