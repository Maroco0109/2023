// M x N 크기의 체스판 -> 8 x 8 체스판
// 맨 왼쪽 위칸이 흰색인 경우, 검은색인 경우
// input: M x N
//        M 행의 상태
// output: 8 x 8 로 잘라 냈을 때 칠해야 하는 정사각형 개수의 최소값
// 1. B로 시작하는 8x8 배열, W로 시작하는 8x8 배열 두개 생성
// 2. B로 시작할때 cnt, W로 시작할때 cnt 체크하는 함수 생성
// 3. 입력받은 2차원 배열의 8x8 생성 범위 고려해가면서 cnt 와 minval 비교, minval 갱신
// 4. minval 출력
#include<iostream>
#include<string>
// B로 시작하는 8X8 배열
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
// W로 시작하는 8X8 배열
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
// B로 시작할때 cnt
int b_cnt(int x, int y);
// W로 시작할때 cnt
int w_cnt(int x, int y);
// 입력받을 배열 board
std::string board[50];

int main(){

}

int b_cnt(int x, int y){

}

int w_cnt(int x, int y){

}