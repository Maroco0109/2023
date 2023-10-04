/* ���� 2738 ��� ����
n*m ũ���� �� ��� A, B�� ��
input: n, m -> n���ٿ� A�� ���� m�� -> n�� �ٿ� B�� ���� m��
n,m <=100, |����| <=100
*/

/* psuedo code
arr_A[][]
arr_B[][]
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++)
        arr_A[i][j] = "input";
}

���� for�� ��� ���� ����: n,m�� ũ�Ⱑ 100 ���� -> ���� for���� 100^2, �� 10,000Ƚ���� �ִ��̹Ƿ� �ð����� 1�ʿ� �ɸ��� ����.
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