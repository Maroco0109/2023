/* 백준 2738 행렬 덧셈
n*m 크기의 두 행렬 A, B의 합
input: n, m -> n개줄에 A의 원소 m개 -> n개 줄에 B의 원소 m개
n,m <=100, |원소| <=100
*/

/* psuedo code
arr_A[][]
arr_B[][]
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++)
        arr_A[i][j] = "input";
}

이중 for문 사용 가능 이유: n,m의 크기가 100 이하 -> 이중 for문은 100^2, 즉 10,000횟수가 최대이므로 시간제한 1초에 걸리지 않음.
*/
#include<iostream>

int main(){
    int n, m, number;
    std::cin>>n>>m;

    int A[n][m];
    int B[n][m];
    int sum[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin>>number;
            A[i][j] = number;
            sum[i][j] = number;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin>>number;
            B[i][j] = number;
            sum[i][j] += number;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cout<<sum[i][j]<<" ";
        }
        std::cout<<'\n';
    }
}