// M x N ũ���� ü���� -> 8 x 8 ü����
// �� ���� ��ĭ�� ����� ���, �������� ���
// input: M x N
//        M ���� ����
// output: 8 x 8 �� �߶� ���� �� ĥ�ؾ� �ϴ� ���簢�� ������ �ּҰ�
// 1. B�� �����ϴ� 8x8 �迭, W�� �����ϴ� 8x8 �迭 �ΰ� ����
// 2. B�� �����Ҷ� cnt, W�� �����Ҷ� cnt üũ�ϴ� �Լ� ����
// 3. �Է¹��� 2���� �迭�� 8x8 ���� ���� ����ذ��鼭 cnt �� minval ��, minval ����
// 4. minval ���
#include<iostream>
#include<string>
// B�� �����ϴ� 8X8 �迭
std::string BW[8][8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
// W�� �����ϴ� 8X8 �迭
std::string WB[8][8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
// B�� �����Ҷ� cnt
int b_cnt(int x, int y);
// W�� �����Ҷ� cnt
int w_cnt(int x, int y);
// �Է¹��� �迭 board
std::string board[50];

int main(){

}

int b_cnt(int x, int y){

}

int w_cnt(int x, int y){

}