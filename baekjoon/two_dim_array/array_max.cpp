/* 백준 2566
9x9 2차원 배열에 81개의 0~n까지의 자연수가 주어질 때
최대값을 찾고 최대값의 index(x,y) 반환
input: 1번째줄 ~ 9번째줄, 한줄에 9개의 수 입력
output: 1번째줄 최대값, 둘째줄 행번호, 열번호. 2개 이상인 경우 한 곳의 위치
*/

#include<iostream>
#include<vector>
std::vector<std::vector<int>> v(9, std::vector<int>(9,0));
int max_el = 0, index_x = 0, index_y = 0;

int main(){
    for(int i=0; i<9; i++){
        std::cin>>v[i][0]>>v[i][1]>>v[i][2]>>v[i][3]>>v[i][4]>>v[i][5]>>v[i][6]>>v[i][7]>>v[i][8];
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(v[i][j]>max_el){
                max_el = v[i][j];
                index_x = i;
                index_y = j;
            }
        }
    }
    std::cout<<max_el<<'\n';
    std::cout<<index_x+1<<" "<<index_y+1<<'\n';
}